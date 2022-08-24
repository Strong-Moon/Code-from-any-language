#include<stdio.h>
void fftc(void);
void fctf(void);

int main(){
	
	int a;
	
	printf("Enter 1 to Convert from Celsius to Fahrenheit\n");
	printf("Enter 2 to convert from Fahrenheit to Celsius\n");
	printf("Choose the action you want to do :");
	scanf("%d",&a);
	
	if(a==1)
		fctf();	
		
	else if(a==2)
		fftc();
	
	else
		printf("You pressed a wrong key!!!");
	
	return(0);
}

// FCTF means  from Celsius to Fahrenheit
// FFTC means  from Fahrenheit to Celsius
void fftc(void){
	
	float F;
	float C;
	printf("Enter a Fahrenheit value :");
	scanf("%f",&F);
	C = (F-32) *5 / 9;
	printf("Celsius value = %.2f",C);
	
}

void fctf(void){
	
	float Fe;
	float Ce;
	printf("Enter a Celsius value :");
	scanf("%f",&Ce);
	Fe = (Ce*1.8) + 32;
	printf("Fahrenheit value = %.2f",Fe);
	
}
