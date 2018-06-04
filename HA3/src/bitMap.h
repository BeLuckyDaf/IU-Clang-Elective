#ifndef __BITMAP_H_
#define __BITMAP_H_

#define INT_SIZE_BIT sizeof(int) * 8
#define CHAR_SIZE_BIT sizeof(char) * 8

void setBitByNumber(int* array, int bit, int position);

int getBitByNumber(int* array, int position);

void setBitByAddress(void* position, int bit);

int getBitByAddress(void* position);

#endif //__BITMAP_H_