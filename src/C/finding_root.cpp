#include <stdio.h>
#include <math.h>
 
int main() {
	
	float a, b, c;
	float disc;
	float x1,x2;
	char letter;
	
	printf("Enter a , b and c :");
	scanf("%f %f %f",&a,&b,&c);
	
	disc=pow(b,2) - 4 * a * c;
	
	printf("Discriminator = %.2f\n",disc);
	printf("If Disc<0 press letter n or N\n");
	printf("If Disc>0 press letter d or D\n");
	printf("If Disc=0 press letter e or E\n");
	printf("\nPlease enter an appropriate character :");
	
	scanf("%c",&letter);  //I had to write twice because of
	scanf("%c",&letter);  //char took 'enter' as a character
	
	/*  E means Equal roots
	    D means Different two roots
		N means No root 
	*/
	switch(letter) {
		
		case 'e':
		case 'E':
			x1 = -b/(2*a);
			x2 = -b/(2*a);
			printf("x1 = x2 = %.2f",x1);
			break;
		
		case 'd':
		case 'D':
			x1=(-b + sqrt(disc))/(2*a);
			x2=(-b - sqrt(disc))/(2*a);
			printf("x1 = %.2f\nx2 = %.2f", x1, x2);
			break;
		
		case 'n':	
		case 'N':
			printf("There is no real root.");
			break;
			
		default:
			printf("You typed a wrong character");
			
		}
	
	
}

      

