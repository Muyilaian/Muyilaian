//program to request the user to enter hours worked in a week and the hourly wages
/*
Author:Muyila Wekesa Ian
Reg:CT101/G/24568/24
Date 7/11/24
*/
#include <stdio.h>

int main() {
    float hours_worked, gross_pay, tax, overtime_hours, overtime_pay;
    const float hourly_rate = 12.00;
    const float overtime_rate = 1.5;

    printf("Enter hours worked: ");
    scanf("%f", &hours_worked);

    if (hours_worked <= 40) {
        gross_pay = hours_worked * hourly_rate;
    } else {
        overtime_hours = hours_worked - 40;
        overtime_pay = overtime_hours * hourly_rate * overtime_rate;
        gross_pay = 40 * hourly_rate + overtime_pay;
    }

    if (gross_pay <= 600) {
        tax = gross_pay * 0.15;
    } else {
        tax = 600 * 0.15 + (gross_pay - 600) * 0.2;
    }

    printf("Gross pay: $%.2f\n", gross_pay);
    printf("Tax: $%.2f\n", tax);

    return 0;
}