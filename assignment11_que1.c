//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int n,int m);
int main()
{
	int n,m,a;
	printf("enter two no ");
	scanf("%d %d",&n,&m);
	a=LCM(n,m);
	printf("%d",a);
}
int LCM(int n,int m)
{
	int l;
		l=n>m?n:m;
		for(l;l<=m*n;l++)
			if(l%n==0 && l%m==0)
			break;
	return l;
}

