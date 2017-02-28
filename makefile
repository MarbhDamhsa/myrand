#                makefile for myrand
#
#
myrand: myrand.o
      gcc myrand.o -o myrand -lm
      
myrand.o: myrand.c
      gcc -c myrand.c
      
clean:
      rm *.o
