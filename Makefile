AR = ar
CC = gcc
FLAGS = -Wall -g
OBJECT_MAIN=main.o
OBJECT_LIB=my_mat.o

all: libmy_mat.so libmy_mat.a connections connectiond

connections: $(OBJECT_MAIN) libmy_mat.a
	$(CC) $(FLAGS) -o connections $(OBJECT_MAIN) libmy_mat.a

connectiond: $(OBJECT_MAIN) 
	$(CC) $(FLAGS) -o connectiond $(OBJECT_MAIN) ./libmy_mat.so

libmy_mat.so:$(OBJECT_LIB)
	$(CC) -shared -o libmy_mat.so $(OBJECT_LIB)

libmy_mat.a:$(OBJECT_LIB)
	$(AR) -rcs libmy_mat.a $(OBJECT_LIB)

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -fPIC -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -fPIC -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections connectiond























