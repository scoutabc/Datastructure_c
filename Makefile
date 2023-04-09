objects = sum-from-low-to-high.o

create : $(objects)
	gcc -o sum-from-low-to-high $(objects) -lm

sum-from-low-to-high.o : sum-from-low-to-high.c
	gcc -c sum-from-low-to-high.c -lm
.PHONY : clean
clean :
	rm sum-from-low-to-high $(objects)