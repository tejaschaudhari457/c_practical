//TEJAS VILAS CHAUDHARI
// 4. Define Student and Course structures and print all course details

#include <stdio.h>

struct Course
{
    char courseName[50];
    int credits;
};

struct Student
{
    char name[20];
    int age;
    struct Course courses[3]; 
};

void printStudent(struct Student s)
{
    printf("Name %s\n", s.name);
    printf("Age %d\n", s.age);
    for (int i = 0; i < 3; i++)
    {
        printf("Course %d %s, Credits %d\n", i + 1, s.courses[i].courseName, s.courses[i].credits);
    }
}

int main()
{
    struct Student s = {"Alice", 21, {{"Math", 4}, {"Physics", 3}, {"Chemistry", 4}}};
    printStudent(s);
    return 0;
}
