#include<stdio.h>
int display_bits(int);
int main()
{
	 int A,B;
	printf("Enter A\n");
	scanf("%i",&A);
	printf("Enter B");
	scanf("%i",&B);
	
	printf("\nA:");
	display_bits(A);
	printf("\nB:");
	display_bits(B);
}

int display_bits(int a)
{	unsigned int mask;
	mask=0x80000000;
	while(mask>0)
	{
		if(a&mask)
		printf("1");
		else
		printf("0");
	
	mask=mask>>1;

	}
printf("\n");	




}


