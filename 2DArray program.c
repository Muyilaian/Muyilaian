// 2D array in C.
/*
Author:Muyila wekesa ian
Reg: CT101/G/24568/24
*/
#include<stdio.h>
int main(){
	int i,j;
	int Marks[2][3]= {{50,90,60},{40,70,40}};
	for (i=0;i<2;i++){
		for (j=0;j<3;j++){
				printf("Marks[%d][%d]= %d\n",i,j,Marks[i][j]);} }
				return 0;
}