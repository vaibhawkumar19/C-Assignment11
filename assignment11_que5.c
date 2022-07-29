//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void primeN(int);
int main()
{
	int n;
	printf("enter the no ");
	scanf("%d",&n);
	primeN(n);
}
void primeN(int n)
{
	int i,x=2;
	while(n)
	{
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		break;
	}
	if(i==x)
	{
	printf("%d",x);
		n--;
	}
	x++;
	}
}



