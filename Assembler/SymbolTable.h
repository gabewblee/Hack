#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include "Config.h"

/**
 * initSymbolTable - Initialize symbol table
 * @symbolTable: Symbol table to initialize
 */
void initSymbolTable(SymbolTable* symbolTable);

/**
 * addEntry - Add symbol and address pair
 * @symbolTable: Symbol table to update
 * @symbol: Symbol name
 * @address: Symbol address
 */
void addEntry(SymbolTable* symbolTable, const char* symbol, uint16_t address);

/**
 * contains - Check if symbol exists
 * @symbolTable: Symbol table to search
 * @symbol: Symbol name
 * Returns: true if symbol exists, otherwise false
 */
bool contains(SymbolTable* symbolTable, const char* symbol);

/**
 * getAddress - Get address for symbol
 * @symbolTable: Symbol table to search
 * @symbol: Symbol name
 * Returns: Address value or 0xFFFF if not found
 */
uint16_t getAddress(SymbolTable* symbolTable, const char* symbol);

/**
 * cleanupSymbolTable - Free symbol table memory
 * @symbolTable: Symbol table to clean up
 */
void cleanupSymbolTable(SymbolTable* symbolTable);

#endif
