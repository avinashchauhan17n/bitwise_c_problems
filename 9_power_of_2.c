#include<stdio.h>

void power_2(int);

int main()
{	int n;
	printf("Enter a number to check poer of 2\n");
	scanf("%d",&n);
	power_2(n);


}

void power_2(int x)
{
	if(!(x&x-1))
	printf("Yes power of two\n");
	else
	printf("Not Power of two\n");	



}
