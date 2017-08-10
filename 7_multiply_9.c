#include<stdio.h>

long multiply_9(int);
int main()
{	int Mplier=9;   // U can change Mplier any value
	int num;
	printf("Enter a Number");
	scanf("%d",&num);
	printf("Result of %d * %d is %ld\n\n",num,Mplier,multiply_9(num));

}

long multiply_9(int n)
{
	unsigned int i;long result;	
	return ((n<<0x3) + n);
//	return ((n<<3)+ 3*n);	

}
