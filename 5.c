//TEJAS VILAS CHAUDHARI

// Check if Bit2 and Bit3 are Both Set


#include <stdio.h>
#include <stdbool.h>

bool BitsSet(unsigned int value) {
    return (value & (1 << 2)) && (value & (1 << 3));
}

int main() {
    unsigned int value = 16;
    if (BitsSet(value)) {
        printf("two set \n");
    } else {
        printf("not set \n");
    }
    return 0;
}
