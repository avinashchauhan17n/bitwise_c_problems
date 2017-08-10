#include<stdio.h>

int CheckNBitStatus(unsigned int x,unsigned int y);

int main()

{       int a,p;
        printf("Enter a Number in dec\\oct\\hexa\n");
        scanf("%i",&a);
	printf("Enter a bit to check for ON/OFF");
	scanf("\n%d",&p);
//	printf("%d\n",p);
        CheckNBitStatus(a,p);
}

int CheckNBitStatus(unsigned int x, unsigned int y)
{    
   int mask=(x>>y-1) & 0x1;
   if(mask==1)
	printf("Bit:1\n");
   else
	printf("Bit:0\n");

}

