//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int main()
{
	int a,b,m;
	printf("enter the no ");
	scanf("%d %d",&a,&b);
	m=HCF(a,b);
	printf("%d",m);
}
int HCF(int a,int b)
{
	int h;
	for(h=a>b?a:b;h>=1;h--)
		if(a%h==0 && b%h==0)
		break;
	return h; 
}
