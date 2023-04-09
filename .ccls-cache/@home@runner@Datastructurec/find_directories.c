#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>

void find_directories(const char *path) {
  struct stat statbuf;
  int res = -1;
  res = lstat(path, &statbuf);
  if (!S_ISDIR(statbuf.st_mode)) {
    return;
  }
  DIR *directory = opendir(path);
  struct dirent *d;
  while ((d = readdir(directory)) != NULL) {
    char subdirname[100];
    if (strcmp(d->d_name, ".") != 0 && strcmp(d->d_name, "..") != 0) {
      sprintf(subdirname, "%s/%s", path, d->d_name);
      printf("%s\n", subdirname);
      find_directories(subdirname);
    }
  }
  closedir(directory);
}

int main(void) {
  const char *path = ".git";
  find_directories(path);
  return 0;
}