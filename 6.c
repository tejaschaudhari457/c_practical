//TEJAS VILAS CHAUDHARI
// Define a Bit-Field Structure and Print Values

#include <stdio.h>

typedef struct {
    unsigned int low : 4;
    unsigned int mid : 4;
    unsigned int high : 8;
} Bitfield;

int main() {
    Bitfield bf;
    bf.low = 0xA;   
    bf.mid = 0x5;   
    bf.high = 0xFF; 

    printf("Low vslue %u", bf.low);
    printf("Mid value %u\n", bf.mid);
    printf("High value %u\n", bf.high);

    unsigned int combined = (bf.low) | (bf.mid << 4) | (bf.high << 8);
    printf("entire value \n", combined);

    return 0;
}
