//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
void square(int n);
int main()
{
	int n;
	printf("enter the no to find the square of any number ");
	scanf("%d",&n);
	square(n);
}
void square(int n)
{
	int sqr;
	sqr=n*n;
	printf("%d",sqr);

}
