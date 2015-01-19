# Makefile for msp430
# Navid Shahrestani, created 12/13/2014
###############################################

TARGET = main
DEVICE = msp430x2012

##############################################


CC=msp430-gcc
CFLAGS=-Os -Wall -g -mmcu=$(DEVICE)

OBJS=$(TARGET).o


all: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET).elf $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -fr $(TARGET).elf $(OBJS)
