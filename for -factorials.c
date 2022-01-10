#include<stdio.h>
int main()
{
	int i=1,f=1,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("factorial of %d is:",num);
    for(i=1;i<=num;i++)
    {
    	f=f*i;
    	printf("%d*",i);
	}
	printf("\nFactorial of %d is: %d",num,f);
}
