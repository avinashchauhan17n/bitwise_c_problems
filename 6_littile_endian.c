//Prog to convert Little endian integer to Big endian integer Note: its not reverse remember MSB LSB interchange

#include<stdio.h>
int littile_big_endian(unsigned int x);
int main()

{ 
	int a;
	printf("Enter a number\n");
	scanf("%i",&a);
	printf("%x\n",littile_big_endian(a));
}

int littile_big_endian(unsigned int x )
	
	{
//  	unsigned int mask=  ;
	x=  (x<< 24)&0xFF000000 | (x>>24)&0x000000FF | (x>>8)&0x0000FF00 | (x<<8)&0x00FF0000 ;
	return x;  
	}
