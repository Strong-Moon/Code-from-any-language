#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
	int grade[10], max = 0, bonus;
	float sum = 0; 
	
	for (int i = 0; i<10; i++){
		printf("Enter the grade of student: ");
		scanf("%d", &grade[i]);
		sum += grade[i];
		
		if(grade[i]>max)
		{
			max = grade[i];
		}
		
	}
	printf("\nThe average of the grades is: %5.2f\n", sum/10);
	printf("\nThe max grade is: %d\n", max);

	bonus = 100 - max;
    printf("\nBonus = %d\nAdding to grades:\n", bonus);

	for (int i = 0; i<10; i++){
		grade[i] += bonus;
		printf("New grades for students number %d: %d\n", i+1, grade[i]);
		}
		
}
