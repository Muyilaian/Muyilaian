//program to calculate electricity bill
/*
Author Name: Muyila Wekesa Ian
Reg: CT101/G/24568/24
*/
#include <stdio.h>
int main()
{
	char CustomerID[25];
	char CustomerName[25];
	float UnitConsumed;
	float ChargesPerUnit;
	float Totalbill;
	float surcharged;
	float lowestbill=100;
	// prompt user to enter customer ID
	printf("Enter the CustomerID: ");
	scanf("%s", &CustomerID);
	// prompt the user to enter the name
	printf("Enter the CustomerName: ");
	scanf("%s", &CustomerName);
	// The user to enter the unit consumed
	printf("Enter the UnitConsumed: ");
	scanf("%f", &UnitConsumed);
	if (UnitConsumed <= 199)
	{
		ChargesPerUnit = 1.20;
		Totalbill = UnitConsumed * ChargesPerUnit;
	}
	else if ((UnitConsumed >= 200) && (UnitConsumed < 400))
	{
		ChargesPerUnit = 1.50;
		Totalbill = ChargesPerUnit * UnitConsumed;
	}
	else if ((UnitConsumed >= 400) && (UnitConsumed <= 600))
	{
		ChargesPerUnit = 1.80;
		Totalbill = ChargesPerUnit * UnitConsumed;
	}
	else
	{
		ChargesPerUnit = 2.00;
		Totalbill = ChargesPerUnit * UnitConsumed;
	}
	if (Totalbill<100){
		Totalbill=lowestbill;}
	
	printf("Total bill %.2f \n", Totalbill);
	if (Totalbill > 400)
	{
		surcharged = 0.15;
		Totalbill = Totalbill + (surcharged * Totalbill);
	}
	printf("CustomerID is % s\n", CustomerID);
	printf("Customer name is %s \n", CustomerName);
	printf("Unit consumed is %.2f \n ", UnitConsumed);
	printf("Charges per unit is %.2f \n", ChargesPerUnit);
	printf("Total amount to pay is %.2f\n", Totalbill);

	return 0;
}