//5. WAP to implement the sizeof operation using bitwise operator.
#include<stdio.h>

int main()
{      
	printf("sizeof(int): %d\n",mysizeof());
}


int mysizeof()
	{       int count=0;
		int i;
		for(i=32;i>0;i--)
		{
	        unsigned  int x= x >> (0x80000000);
		count++;
		}
		return count/8;
	}	
