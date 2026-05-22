CC     = gcc
CFLAGS = -Wall -Wextra -std=gnu99

.PHONY: all clean

all: Assembler/Assembler VirtualMachine/VMTranslator

Assembler/Assembler: Assembler/Assembler.o Assembler/Parser.o Assembler/Code.o Assembler/SymbolTable.o
	$(CC) $(CFLAGS) Assembler/Assembler.o Assembler/Parser.o Assembler/Code.o Assembler/SymbolTable.o -o Assembler/Assembler

Assembler/Assembler.o: Assembler/Assembler.c
	$(CC) $(CFLAGS) -c Assembler/Assembler.c -o Assembler/Assembler.o

Assembler/Parser.o: Assembler/Parser.c
	$(CC) $(CFLAGS) -c Assembler/Parser.c -o Assembler/Parser.o

Assembler/Code.o: Assembler/Code.c
	$(CC) $(CFLAGS) -c Assembler/Code.c -o Assembler/Code.o

Assembler/SymbolTable.o: Assembler/SymbolTable.c
	$(CC) $(CFLAGS) -c Assembler/SymbolTable.c -o Assembler/SymbolTable.o

VirtualMachine/VMTranslator: VirtualMachine/VMTranslator.o VirtualMachine/CodeWriter.o VirtualMachine/Parser.o
	$(CC) $(CFLAGS) VirtualMachine/VMTranslator.o VirtualMachine/CodeWriter.o VirtualMachine/Parser.o -o VirtualMachine/VMTranslator

VirtualMachine/VMTranslator.o: VirtualMachine/VMTranslator.c
	$(CC) $(CFLAGS) -c VirtualMachine/VMTranslator.c -o VirtualMachine/VMTranslator.o

VirtualMachine/CodeWriter.o: VirtualMachine/CodeWriter.c
	$(CC) $(CFLAGS) -c VirtualMachine/CodeWriter.c -o VirtualMachine/CodeWriter.o

VirtualMachine/Parser.o: VirtualMachine/Parser.c
	$(CC) $(CFLAGS) -c VirtualMachine/Parser.c -o VirtualMachine/Parser.o

clean:
	rm -f Assembler/Assembler.o Assembler/Parser.o Assembler/Code.o Assembler/SymbolTable.o Assembler/Assembler
	rm -f VirtualMachine/VMTranslator.o VirtualMachine/CodeWriter.o VirtualMachine/Parser.o VirtualMachine/VMTranslator