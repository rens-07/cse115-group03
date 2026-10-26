
TARGET	= game.exe
CC 		= gcc 
CFLAGS	= -Wall -Wextra
SRCS	= $(wildcard src/*.c)
OBJS	= $(SRCS:.c=.o)
CLS 	= cls


$(TARGET) : $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@ 

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

run : 
	@$(TARGET) 

clean :
	@$(CLS)
	@del /Q $(TARGET)
	@del /Q $(OBJS)

 
	