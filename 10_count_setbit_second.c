#include<stdio.h>

int CountSetBits(int x);

int main()

{       int a;
        printf("Enter a Number in decimal\n");
        scanf("%i",&a);

        printf("Count:%d\n",CountSetBits(a) );
}

int CountSetBits(int x)
{       int count=0;
      //  unsigned int mask=0x80000000;
        while(x!=0)
        {
		x=x & (x-1);
		count++;
        }

        return count;

}

