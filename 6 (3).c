//TEJAS VILAS CHAUDHARI
// 6. Print temperature and pressure using a union for memory efficiency

#include <stdio.h>

union Data
{
    float temperature;
    float pressure;
};

int main()
{
    union Data data;

    data.temperature = 98.6;
    printf("Temperature %.2f\n", data.temperature);

    data.pressure = 101.3;
    printf("Pressure %.2f\n", data.pressure);

    return 0;
}
