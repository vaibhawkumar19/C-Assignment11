//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibonacci(int);
int main()
{
	int n;
	printf("enter the no to print fibonacci series ");
	scanf("%d",&n);
	fibonacci(n);
}
void fibonacci(int n)
{
	int next=1,first=1,last=0,i;
	printf("1");
	for(i=0;i<=n;i++)
	{
		next=first+last;
		printf("%d ",next);
		last=first;
		first=next;
	}
	return;
}
