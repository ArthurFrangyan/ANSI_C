TARGET = Calc
CC = gcc

PREF_SRC = ./
PREF_OBJ = ./obj/
PREF_OBJ2= .\\obj\\

SRC = $(wildcard $(PREF_SRC)*.c)
OBJ = $(patsubst $(PREF_SRC)%.c, $(PREF_OBJ)%.o, $(SRC))

$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(PREF_OBJ)%.o : $(PREF_SRC)%.c
	$(CC) -c $< -o $@  

clean :
	del $(TARGET).exe $(PREF_OBJ2)*.o