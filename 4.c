
// TEJAS VILAS CHAUDHARI

// Initialize and Print Details of Employee and Manager

#include <stdio.h>

typedef struct
{
    char name[100];
    int id;
} Employee;

typedef struct
{
    Employee emp;
    int teamSize;
} Manager;

void dataEmployee(Employee *emp, const char *name, int id)
{
    snprintf(emp->name, sizeof(emp->name), "%s", name);
    emp->id = id;
}

void dataManager(Manager *mgr, const char *name, int id, int teamSize)
{
    dataEmployee(&mgr->emp, name, id);
    mgr->teamSize = teamSize;
}

void printEmployee(const Employee *emp)
{
    printf("Employee Name %s\n  %d\n", emp->name, emp->id);
}

void printManager(const Manager *mgr)
{
    printEmployee(&mgr->emp);
    printf("Team Size  %d\n", mgr->teamSize);
}

int main()
{
    Employee emp;
    Manager mgr;

    dataEmployee(&emp, "tejas", 123);
    dataManager(&mgr, "chaudhari", 456, 10);

    printf("Employee Details:\n");
    printEmployee(&emp);

    printf("\n total Details:\n");
    printManager(&mgr);

    return 0;
}
