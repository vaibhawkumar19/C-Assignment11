//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void primeN(int,int);
int main()
{
	int a,b;
	printf("enter the two no ");
	scanf("%d %d",&a &b);
	primeN(a,b);
}
void primeN(int n,int m)
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



