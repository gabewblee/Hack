#ifndef PARSER_H
#define PARSER_H

#include "Config.h"

/**
 * getCommandType - Get VM command type
 * @line: VM instruction line
 * Returns: Command type enum value
 */
int getCommandType(const char* line);

/**
 * removeWhitespace - Strip spaces and comments
 * @line: VM instruction line buffer
 * Returns: Trimmed line pointer or NULL
 */
char* removeWhitespace(char* line);

/**
 * getArg1 - Extract first VM argument
 * @line: VM instruction line
 * @commandType: Parsed command type
 * @buffer: Destination buffer
 * @bufferSize: Destination buffer size
 * Returns: Pointer to @buffer or NULL
 */
char* getArg1(const char* line, int commandType, char* buffer, size_t bufferSize);

/**
 * getArg2 - Extract second VM argument
 * @line: VM instruction line
 * @buffer: Destination buffer
 * @bufferSize: Destination buffer size
 * Returns: Pointer to @buffer or NULL
 */
char* getArg2(const char* line, char* buffer, size_t bufferSize);

#endif
