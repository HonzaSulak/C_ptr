EXECUTABLE =  double_arr
CC = gcc
CFLAGS = -g -std=gnu99 
LOGIN=xsulak07


#CFLAGS += -lrt
#CFLAGS += -pthread
#CFLAGS += -Wall -Wextra -Werror -pedantic

all: $(EXECUTABLE)

pack:
	zip $(LOGIN) *.c *.out Makefile

clean:
	rm -f $(EXECUTABLE) *.o