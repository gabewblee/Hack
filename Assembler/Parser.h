#ifndef PARSER_H
#define PARSER_H

#include "Config.h"

/**
 * getCommandType - Get assembly command type
 * @line: Assembly instruction line
 * Returns: Command type enum value
 */
int getCommandType(const char* line);

/**
 * isNumber - Check if string is decimal
 * @line: Input string
 * Returns: true if numeric, otherwise false
 */
bool isNumber(const char* line);

/**
 * removeWhitespace - Strip spaces and comments
 * @line: Assembly instruction line buffer
 * Returns: Trimmed line pointer or NULL
 */
char* removeWhitespace(char* line);

/**
 * getSymbol - Extract symbol from command
 * @line: Assembly instruction line
 * Returns: Allocated symbol string
 */
char* getSymbol(const char* line);

/**
 * getDest - Extract C-command dest field
 * @line: Assembly instruction line
 * Returns: Allocated dest string or NULL
 */
char* getDest(const char* line);

/**
 * getComp - Extract C-command comp field
 * @line: Assembly instruction line
 * Returns: Allocated comp string
 */
char* getComp(const char* line);

/**
 * getJump - Extract C-command jump field
 * @line: Assembly instruction line
 * Returns: Allocated jump string or NULL
 */
char* getJump(const char* line);

/**
 * freeParserStrings - Free parser string outputs
 * @symbol: Symbol string pointer
 * @dest: Destination string pointer
 * @comp: Computation string pointer
 * @jump: Jump string pointer
 */
void freeParserStrings(char* symbol, char* dest, char* comp, char* jump);

#endif
