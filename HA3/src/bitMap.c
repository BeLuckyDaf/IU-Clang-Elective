#include "bitMap.h"

// this function changes bit with number 'position' to the 'bit'
void setBitByNumber(int* array, int bit, int position)
{
    int* reqIntPointer = array + position / INT_SIZE_BIT;
    int mask = (1 << (INT_SIZE_BIT - (position % INT_SIZE_BIT)-1));
    *(reqIntPointer) = bit == 1? (*reqIntPointer | mask) : (*reqIntPointer & ~mask);
}

// this function returns position's bit from the array
int getBitByNumber(int* array, int position)
{
    int reqInt = array[position / INT_SIZE_BIT];
    return (reqInt >> (INT_SIZE_BIT - 1 - (position % INT_SIZE_BIT))) & 1;
}

// this function changes bit by memory address to 'bit'
void setBitByAddress(void* position, int bit)
{
    char mask = (bit == 1) ? (char)(1 << CHAR_SIZE_BIT - 1) : (char)(1 << (CHAR_SIZE_BIT - 1) - 1);
    *((char*)position) = bit == 1? (char)bit | mask : (char)bit & ~mask;
}

// this function returns first bit by memory address 'position'
int getBitByAddress(void* position)
{
    return (*((char*)position) & 128) >> (CHAR_SIZE_BIT - 1);
}