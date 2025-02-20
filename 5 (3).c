//TEJAS VILAS CHAUDHARI
// 5. Take user input for student details and print them

#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    char standard[20];
    float percentage;
};

int main()
{
    struct Student s;
    printf("Enter Roll Number ");
    scanf("%d", &s.rollNumber);
    printf("Enter Name ");
    scanf("%s", s.name);
    printf("Enter Standard ");
    scanf("%s", s.standard);
    printf("Enter Percentage ");
    scanf("%f", &s.percentage);

    printf("\nDetails\n");
    printf("Roll Number %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("Standard %s\n", s.standard);
    printf("Percentage %.2f\n", s.percentage);
    return 0;
}
