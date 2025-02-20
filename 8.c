//TEJAS VILAS CHAUDHARI
//  Set, Clear, and Toggle Flags in a Register


#include <stdio.h>

int main() {
    unsigned int registerValue = 0;

    
    registerValue |= (1 << 3);
    printf("setting bit 3 \n", registerValue);

    
    registerValue &= ~(1 << 3);
    printf("clearing bit 3 \n", registerValue);

    
    registerValue ^= (1 << 2);
    printf("toggling bit 2 \n", registerValue);

    return 0;
}

