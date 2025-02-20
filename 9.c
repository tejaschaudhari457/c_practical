//TEJAS VILAS CHAUDHARI
// Bit Masking and Modifying Specific Bits

#include <stdio.h>

int main() {
    unsigned int value = 0xFF; 
    unsigned int mask = 0x30; 
    unsigned int newValue = value & mask;
    
    
    printf(" total Masked value \n", newValue);

    
    value &= ~mask;
    printf("Value after clearing bits 4 and 5 \n", value);

    
    value |= mask;
    printf("Value after setting bits 4 and 5 \n", value);

    return 0;
}
