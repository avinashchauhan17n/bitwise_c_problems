/*15.Write a functionsetbits(x,p,n,y)that returns x with then bits that begin at position p set to the rightmost n bits of y, leaving the
other bits unchanged.

e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then you need to strip off 3 bits of y (111) and put
in x at position 10xxx010 to get answer 10111010. 

Your answer should print out the result in binary form although input can be indecimal form.

Your output should be like this:=
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary).*/

#include<stdio.h>

void setbits(int,int,int,int);
int display_bits(int);

int main()
{

	int x,p,n,y;
	printf("Enter x\n");
	scanf("%d",&x);
	printf("Enter p");
	scanf("%d",&p);
	
	printf("Enter n\n");
        scanf("%d",&n);
        printf("Enter y\n");
        scanf("%d",&y);

	
	setbits(x,p,n,y);
}

void setbits(int x, int p, int n , int y)
{		
	int result;
	result=	(( (y<<8-p-1)&(0xd0)) >> n-1 ) | (x) ;   
	
	printf("X is :");
	display_bits(x);
	
	printf("Y is :");
        display_bits(y);

	printf("O/p:  ");
	display_bits(result);
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
	printf("\n\n");	
}

