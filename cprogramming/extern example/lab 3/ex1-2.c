#include <stdio.h>

struct Employee {
    char name[50];
    float basic_pay;
    float da;
    float gross_salary;
};

int main() {
    struct Employee employees[10];
    int i;
    const int num_employees = 10;

    for(i = 0; i < num_employees; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%49s", employees[i].name);

        printf("Enter basic pay of employee %d: ", i + 1);
        scanf("%f", &employees[i].basic_pay);

        employees[i].da = 0.52 * employees[i].basic_pay;
        employees[i].gross_salary = employees[i].basic_pay + employees[i].da;
    }

    printf("\n-------------------------------------\n");
    printf("Employee Name\tGross Salary\n");
    printf("-------------------------------------\n");

    for(i = 0; i < num_employees; i++) {
        printf("%s\t\t%.2f\n", employees[i].name, employees[i].gross_salary);
    }

    return 0;
}
