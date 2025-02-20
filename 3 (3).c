//TEJAS VILAS CHAUDHARI
// 3. Define a Circle structure and update its radius using pointers

#include <stdio.h>

struct Circle
{
    float radius;
    char color[20];
};

void updateRadius(struct Circle *c, float newRadius)
{
    c->radius = newRadius;
    printf("Updated Radius %.2f\n", c->radius);
}

int main()
{
    struct Circle c = {10.0, "Red"};
    updateRadius(&c, 45.5);
    return 0;
}
