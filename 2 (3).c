//TEJAS VILAS CHAUDHARI
// 2. Define a Person structure and initialize with your details

#include <stdio.h>

struct Person
{
    char name[20];
    int age;
};

int main()
{
    struct Person p = {"tejas", 23};
    printf("%s %d\n", p.name, p.age);
    // printf("Age %d\n", p.age);
    return 0;
}
