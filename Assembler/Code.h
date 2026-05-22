#ifndef CODE_H
#define CODE_H

#include "Config.h"

/**
 * convertAddress - Convert decimal address to 16-bit binary
 * @address: Decimal address string
 * Returns: Binary string pointer
 */
const char* convertAddress(const char* address);

/**
 * convertDest - Convert dest mnemonic to bits
 * @dest: Destination mnemonic
 * Returns: Destination bit string
 */
const char* convertDest(const char* dest);

/**
 * convertComp - Convert comp mnemonic to bits
 * @comp: Computation mnemonic
 * Returns: Computation bit string
 */
const char* convertComp(const char* comp);

/**
 * convertJump - Convert jump mnemonic to bits
 * @jump: Jump mnemonic
 * Returns: Jump bit string
 */
const char* convertJump(const char* jump);

#endif
