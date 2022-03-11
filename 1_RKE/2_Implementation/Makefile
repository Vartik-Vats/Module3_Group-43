CC=arm-none-eabi-gcc
CFLAGS=-c -mcpu=cortex-m4 -mthumb -std=gnu11 -Wall -O0
LDFLAGS= -nostdlib -T link.ld 

all:clean main.o function.o startup.o final.elf qemu

main.o:main.c
	$(CC) $(CFLAGS) main.c -o main.o
	
function.o:function.c
	$(CC) $(CFLAGS) function.c -o function.o

interrupts.o:startup.c
	$(CC) $(CFLAGS) startup.c -o startup.o

final.elf: main.o function.o startup.o
	$(CC) $(LDFLAGS) main.o function.o startup.o -o final.elf

qemu:
	qemu-system-gnuarmeclipse.exe -M STM32F4-Discovery -mcu STM32F407VG -kernel final.elf

clean:
	rm -rf *.o *.elf