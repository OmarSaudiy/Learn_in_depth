CC=arm-none-eabi-
CFLAGS=-mthumb -mcpu=cortex-m4 -gdwarf-2 -g
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
Asm=$(wildcard *.s)
AsmOBJ=$(Asm:.s=.o)
Project_name=learn_in_depth_cortex_m4


all: $(Project_name).bin
	@echo "=====.bin GENERATED====="

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@


$(Project_name).elf: $(OBJ) $(AsmOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsmOBJ) -Map=mapfile.map -o $@
	cp $(Project_name).elf $(Project_name).axf
$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy -O binary $< $@

clean_all:
	rm *.o *.elf *.bin
	@echo "=====All Deleted====="

clean:
	rm *.elf *.bin
	@echo "=====.elf & .bin are Deleted====="