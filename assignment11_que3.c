//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
void printN(int );
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	printN(n);
}
void printN(int n)
{
	int i;
	for(i=2;i<=n-1;i++)
	{
	if(n%2==0)
		break;
	}
	if(n==i)
	printf("prime ");
	else
	printf("not prime");

}
