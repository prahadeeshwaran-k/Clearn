#include <stdio.h>


struct employee {
    char name[30];
    int empId;
    float salary;
};

int main()
{

    struct employee emp = { "Mike", 1120, 76909.00f };

    printf("\n Name: %s", emp.name);
    printf("\n Id: %d", emp.empId);
    printf("\n Salary: %f\n", emp.salary);

    return 0;
}