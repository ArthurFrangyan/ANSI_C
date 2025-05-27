SRC = $(wildcard *.c)
TARGET = a
TARGET : 
	gcc $(SRC) -o $(TARGET)

clean :
	-del $(TARGET).exe


# SRC = $(wildcard *.c)
# TARGET = a
# TARGET : 
# 	gcc $(SRC) -o $(TARGET)

# clean :
# 	del .\\a.exe


# CC = gcc
# OBJ = $(patsubst %.c, %.o, $(SRC))
# TARGET = Calc
# $(TARGET) : main.o getop.o stack.o getch.o
# 	$(CC) $(OBJ) -o $(TARGET)

# %.o : %.c
# 	$(CC) -c $< -o $@  

# clean :
# 	del $(TARGET) *.o


	

# PREF_OBJ = ./obj/
# CC = gcc
# OBJ = $(patsubst %.c, $(PREF_OBJ)%.o, $(SRC))
# TARGET = Calc
# $(TARGET) : main.o getop.o stack.o getch.o
# 	$(CC) $(OBJ) -o $(TARGET)

# $(PREF_OBJ)%.o : %.c
# 	$(CC) -c $< -o $@  

# clean :
# 	del $(TARGET) $(PREF_OBJ)*.o

#___________________________________
# a : main.o getop.o stack.o getch.o
# 	gcc main.o getop.o stack.o getch.o

# main.o : main.c
# 	gcc -c main.c -o main.o

# getop.o : getop.c
# 	gcc -c getop.c -o getop.o

# getch.o : getch.c
# 	gcc -c getch.c -o getch.o

# stack.o : stack.c
# 	gcc -c stack.c -o stack.o

# clean :
# 	del *.o