// program to find compound interest
/*
program to find compound interest
author muyila Ian
reg no CT101/G/24568/24
date:14/09/2024
*/
//proprocessing directive scanf(" ");,printf(" ")
#include <stdio.h>
#include<math.h>
int main() {
      //Declaration and initialization of variables
      double principal;
      double rate;
      double time;
      int n;
      double amount;
      double compound_interest;
      
      printf("enter the principal amount");
      scanf("%lf", & principal);
      
      printf("Enter the rate");
      scanf("%lf",&rate);
      
      printf("Enter the time(in years);");
      scanf("%lf",&time);
      
      printf("enter number of interest is compound annually");
      scanf("%d",&n);
      
      rate=rate/100;
      
      amount =principal*pow((1+rate/n),n* time);
      
      compound_interest=amount-principal;
      
      printf("total amount=%2lf\n",amount);
      printf("compound_interest=%.2lf\n",compound_interest);
      
      
      return 0;
  }    
      