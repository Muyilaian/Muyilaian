//program to find simple interest
/*
program to find simple interest 
Author Muyila ian
reg 101/G/24568/24
Date 01/09/2024
*/
//preprocessing directive scanf(" "):,printf(" ");
#include<stdio.h>
int main() {
     //Declaration and initialization of variables     
     int book_ID;
     int duedate;
     int returndate;
     int daysoverdue;
     int fine_amount;
     int fine_rate;
     
     printf("enter book_ID");
     scanf("%d",&book_ID);
     
     printf("enter duedate");
     scanf("%d",&duedate);
     
     printf("enter returndate");
     scanf("%d",& returndate);
     
     daysoverdue =returndate - duedate;
     
     if(daysoverdue<=7)
     {
      fine_rate=20;
      fine_amount=fine_rate*daysoverdue;
      printf("fine_amount=%d\n",fine_amount);
     }
     
     if(7<daysoverdue && daysoverdue<=14)
     {
      fine_rate =50;
      fine_amount=fine_rate*daysoverdue;
      printf("fine_amount=%d\n",fine_amount);
     }
     
     if(daysoverdue>14)
     {
      fine_rate=100;
      fine_amount=fine_rate*daysoverdue;
      printf("fine_amount=%d\n",fine_amount);
     }
     return 0;
     }