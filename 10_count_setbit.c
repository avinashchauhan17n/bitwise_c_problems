#include<stdio.h>

int CountSetBits(int x);

int main()

{	int a;
	printf("Enter a Number in decimal\\hexa\\octal\n");
	scanf("%i",&a);

	printf("Count:%d\n",CountSetBits(a) );
}

int CountSetBits(int x)
{       int count=0;
	unsigned int mask=0x80000000;
	while(mask>0)
	{
		if(x&mask)
		{
		count++;
		printf("1");
		}
		else
		printf("0");
	
	mask=mask>>1;
	}

	printf("\n");
	return count;

}
