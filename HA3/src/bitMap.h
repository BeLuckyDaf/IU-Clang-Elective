#ifndef __BITMAP_H_
#define __BITMAP_H_

#define BYTE_SIZE 8
#define INT_SIZE_BIT (sizeof(int) * BYTE_SIZE)
#define CHAR_SIZE_BIT (sizeof(char) * BYTE_SIZE)

void setBitByNumber(int* array, int bit, int position);

int getBitByNumber(int* array, int position);

void setBitByAddress(void* position, int bit);

int getBitByAddress(void* position);

#endif //__BITMAP_H_