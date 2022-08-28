#include <stdio.h>

void min_max(int *a, int *min, int *max);

int main()
{
    int a[10],min,max;
    printf("Enter  10 numbers :");
    int i;
    for(i=0; i<10; i++)
	{
        scanf("%d",&a[i]);
    }
    min_max( &a[0], &min, &max);  // function call
    printf("\nLargest:%d",max);
    printf("\nSmallest:%d",min);
    return 0;
}
void min_max(int *a, int *min, int *max){    // function definition
    *min=*max=a[0];
    int i;
    for(i=0; i<10 ;i++){
        if(a[i]>*max)
        *max=a[i];
        if(a[i]<*min)
        *min=a[i];
    }
    
}
	
