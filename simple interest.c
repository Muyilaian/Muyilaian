// program to find simple intrest
/*
program to find simple intrest 
Author Muyila
Date 26/09/2024
*/
//proprocessing directives scanf(" ");,printf(" ");
#include <stdio.h>
int main() {
       //Declaration of the inilization variables
       float principal;
       float rate; 
       float time;
       float simple_interest;
       
       
       printf("Enter the principal;");
       scanf("%f",&principal);
       
       printf("Enter the interest rate;");
       scanf("%f",&rate);
      
       printf("Enter time(in years);");
       scanf("%f",&time); 
       
       simple_interest=(principal*rate*time)/100;
       
       printf("simple_interest=%2.f\n",simple_interest);
       
       return 0;
       
    }
    