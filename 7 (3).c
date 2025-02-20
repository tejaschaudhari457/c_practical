//TEJAS VILAS CHAUDHARI
// 7. Define a Vehicle union and print different data types

#include <stdio.h>

union Vehicle
{
    int wheels;
    float engineCapacity;
    char vehicleType[20];
};

int main()
{
    union Vehicle v;

    v.wheels = 4;
    printf("Number of wheels %d\n", v.wheels);

    v.engineCapacity = 2.5;
    printf("Engine capacity %.1fL\n", v.engineCapacity);

    strcpy(v.vehicleType, "Hatchback");
    printf("Vehicle type %s\n", v.vehicleType);

    return 0;
}