// 3D array in C.
/*
Author:Muyila wekesa ian
Reg: CT101/G/24568/24
*/
#include<stdio.h>
int main(){
	int i,j,k;
	int Marks[2][2][3]={ {{60,90,80},{60,70,50}},{{50,90,60},{30,40,80}} };
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			for (k=0;k<3;k++){
				printf("Marks[%d][%d][%d] = %d\n",i,j,k,Marks[i][j][k]);}}}
				return 0;
}