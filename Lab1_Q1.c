#include<stdio.h>
int main()
{
    int employeeID;
    float totalHoursWorked, amountPerHour, salary;

    // Taking Inputs
    printf("Enter Employee ID: ");
    scanf("%d", &employeeID);

    printf("Enter total hours worked in a month: ");
    scanf("%f", &totalHoursWorked);

    printf("Enter amount received per hour: ");
    scanf("%f", &amountPerHour);

    // Calculating Salary
    salary= totalHoursWorked* amountPerHour;

    // Printing Details
    printf("Emoployee ID: %d\n", employeeID);
    printf("Employee Salary: %.2f\n", salary);

    return 0;
}