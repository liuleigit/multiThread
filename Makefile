TARGET = try.exe

OBJECTS = list.o main.o

list.o : list.h list.c

main.o : list.o main.c

all : $(OBJECTS)
	gcc $(OBJECTS) -o $(TARGET)

clean :
	rm $(TARGET) $(OBJECTS)
