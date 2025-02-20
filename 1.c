//TEJAS VILAS CHAUDHARI
//Calculate the Area of a Circle with taking real name for typedef


#include <stdio.h>

typedef float Real;

Real CircleArea(Real radius) {
    const Real PI = 3.141;
    return PI * radius * radius;
}

int main() {
    Real radius = 4.0;
    Real area = CircleArea(radius);
    printf("Area of the circle %.2f is %.2f\n", radius, area);
    return 0;
}
