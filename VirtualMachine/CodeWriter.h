#ifndef CODEWRITER_H
#define CODEWRITER_H

#include "Config.h"

/**
 * setFile - Set current VM file name
 * @fileName: Current input VM file name
 */
void setFile(const char* fileName);

/**
 * setFunction - Set current function scope
 * @functionName: Current function name
 */
void setFunction(const char* functionName);

/**
 * writeInit - Write VM bootstrap code
 * @outputFile: Output assembly file
 */
void writeInit(FILE* outputFile);

/**
 * writeLabel - Write label declaration
 * @outputFile: Output assembly file
 * @label: Label name
 */
void writeLabel(FILE* outputFile, const char* label);

/**
 * writeGoto - Write unconditional jump
 * @outputFile: Output assembly file
 * @label: Label name
 */
void writeGoto(FILE* outputFile, const char* label);

/**
 * writeIf - Write conditional jump
 * @outputFile: Output assembly file
 * @label: Label name
 */
void writeIf(FILE* outputFile, const char* label);

/**
 * writeCall - Write function call sequence
 * @outputFile: Output assembly file
 * @functionName: Function to call
 * @numArgs: Number of pushed arguments
 */
void writeCall(FILE* outputFile, const char* functionName, int numArgs);

/**
 * writeReturn - Write function return sequence
 * @outputFile: Output assembly file
 */
void writeReturn(FILE* outputFile);

/**
 * writeFunction - Write function declaration
 * @outputFile: Output assembly file
 * @functionName: Function name
 * @numLocals: Number of local variables
 */
void writeFunction(FILE* outputFile, const char* functionName, int numLocals);

/**
 * writeArithmetic - Write arithmetic command
 * @outputFile: Output assembly file
 * @command: Arithmetic mnemonic
 */
void writeArithmetic(FILE* outputFile, const char* command);

/**
 * writePushPop - Write push or pop command
 * @outputFile: Output assembly file
 * @commandType: Push or pop command type
 * @segment: Memory segment name
 * @index: Segment index
 */
void writePushPop(FILE* outputFile, int commandType, const char* segment, const char* index);

#endif
