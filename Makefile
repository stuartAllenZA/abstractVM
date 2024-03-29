TARGET = abstractVM

CC = g++

CFLAGS = -Wall -Werror -Wextra

I = -I include

SP = ./src/

SRC = $(SP)AbstractVM.cpp\
	  $(SP)LexerClass.cpp\
	  $(SP)ParserClass.cpp

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(I) $(SRC) -o $(TARGET)

clean:
	rm $(TARGET)

re: clean all

run: re
	clear && ./$(TARGET)
