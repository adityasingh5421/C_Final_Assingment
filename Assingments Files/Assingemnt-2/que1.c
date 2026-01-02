#include <stdio.h>

int main()
{
    char name[50];
    float basicSalary, hra, da, grossSalary, incomeTax, netSalary;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    // Calculations
    hra = 0.20 * basicSalary;        // 20% HRA
    da = 0.10 * basicSalary;         // 10% DA
    grossSalary = basicSalary + hra + da;
    incomeTax = 0.05 * grossSalary;  // 5% Income Tax
    netSalary = grossSalary - incomeTax;

    // Display salary details
    printf("\n----- Salary Details -----\n");
    printf("Employee Name   : %s\n", name);
    printf("Basic Salary    : %.2f\n", basicSalary);
    printf("HRA (20%%)       : %.2f\n", hra);
    printf("DA (10%%)        : %.2f\n", da);
    printf("Gross Salary    : %.2f\n", grossSalary);
    printf("Income Tax (5%%) : %.2f\n", incomeTax);
    printf("Net Salary      : %.2f\n", netSalary);

    return 0;
}
