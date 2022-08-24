#include <stdio.h>
#include <string.h>

//function prototype declaration
void readInput(char str[] );
void split(char str[], char str1[],char str2[]);

//main function
int main()
{
    //declaring the char[] for two strings
    char str1[80], str2[80], str[100];
    
    //read string from monitor
    readInput(str);
    
    //SPLIT string based on'*' character'
    split(str,str1, str2);
    
    //comaring two strings alphabetically
   	int result = strcmp(str1,str2);
   
   	printf("Alphabetically %s is ",str1);
   
   	if(result > 0)
        printf("greater than ");    
    else if(result < 0)
        printf("less than ");    
    else //result is 0
        printf("equal to ");
    printf("%s",str2);

    return 0;
}

//function to split string based on '*''
void split(char str[], char str1[],char str2[])
{
    //declaring integers
    int i, indexOfStar;
    
    //traverse the str and find index of char '*' 
    for ( i = 0; str[i]!='\0'; i++) {
        char ch = str[i];
        if(ch == '*') {
            indexOfStar = i;
            break;
        }
    }
    //copy chars from str from 0 till indexOfStar
    for( i = 0; i < indexOfStar; i++) {
        str1[i] = str[i];
    }
    str1[i] = '\0';
    
    int index = 0;
    //copy chars from str from indexOfStar till end 
    for( i = indexOfStar+1;  str[i]!='\0'; i++) {
        str2[index++] = str[i];
    }
    str2[index] = '\0'; 
}

//function to read string as input from user
void readInput(char str[] ) 
{
	printf("Write 2 name like this format => name*name : ");
    scanf("%[^\n]%*c",str);//read till newline character
}
