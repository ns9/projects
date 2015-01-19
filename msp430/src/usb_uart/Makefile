# Makefile for msp430
# Navid Shahrestani, created 12/13/2014
###############################################

TARGET = main
DEVICE = msp430x2012
LIB = init_lib
VPATH = /home/navid/projects/msp430/lib /home/navid/projects/msp430/obj

#LIB_DIR = /home/navid/projects/msp430/lib
OBJ_DIR = /home/navid/projects/msp430/obj
##############################################


CC=msp430-gcc
CFLAGS=-Os -Wall -g -mmcu=$(DEVICE)

OBJS= $(LIB).o $(TARGET).o


all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET).elf

$(TARGET).o: $(TARGET).c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(OBJ_DIR)/$@

clean:
	rm -rf $(TARGET).elf $(OBJS)

