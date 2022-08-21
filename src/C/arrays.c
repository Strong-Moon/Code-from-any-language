#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// converting two dimensional array to one dimensional array.
//and making integer number from float number.
int main() {

	float matrix[3][4] = { 13.5, 24.88 ,66.28,30.0,
						   2.84,412.15 ,13.2 ,9.9 ,
						   15.5,38.89  ,12.5 ,16.18};
	int arr[12]; 
	int i,j,k=0; 
	printf("2D-Array\n"); 
	
	for(i=0;i<3;i++) 
	{ 
		for(j=0;j<4;j++) 
		{ 
			printf("%.2f   ",matrix[i][j]); 
			arr[k]=matrix[i][j]; 
			k++; 
		} 
		printf("\n"); 
	} 
	printf("------------------------------------\n");
	printf("1D-Array\n"); 
	for(i=0;i<12;i++) 
		printf("%d ",arr[i]); 
	return 0; 
} 


