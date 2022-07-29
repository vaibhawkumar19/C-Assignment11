//10. Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int main()
{
	
	fact();
	series();
	printf("%d",series());
}
int series(int n)
{
	int sum;
	sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
	return sum;
}
int fact(int n)
{
	int fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
}

