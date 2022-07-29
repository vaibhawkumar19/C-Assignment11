//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int printN(int);
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	printN(n);
	printf("%d",printN(n));
}
int printN(int n)
{
	int i,count,j;
	for(i=n+1;;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if(i==j)
		return j;
	}
}
