#include<stdio.h>
int reverse(int);
void displaybits(int);
int main()
{
	int a;
	printf("enter Number\n");
	scanf("%i",&a);
	displaybits(a);
//	printf("%x",reverse(a));
	displaybits(reverse(a));
}

int reverse(int a)
{ 
	unsigned int reverse_num=0,i,temp;
	for(i=0;i<32;i++)
	{
	temp=(a & (1<<i));
//	printf("temp:%d",temp);
	if(temp)
	reverse_num |= (1<<((32-1)-i));
	}
return reverse_num;
}

void displaybits(int x)
{  	unsigned int MASK=0x80000000;
	while(MASK>0)
	{ 
		if(x & MASK)
		printf("1");
		else
		printf("0");
	   	printf(" ");	
		MASK=MASK>>1;	
	}	
printf("\n");

}
