#include<stdio.h>
int reverse(int);
void displaybits(int);
int main()
{
        int a;
        printf("enter Number\n");
        scanf("%i",&a);
        displaybits(a);
//      printf("%x",reverse(a));
        displaybits(reverse(a));
}

int reverse(int a)
{
        unsigned int reverse_num=0,i,temp;
	//unsigned int odd_bits=a&0x55555555;
	unsigned int even_bits=a&0xAAAAAAAA;
        for(i=1;i<32;i=i+2)
        {
        temp=(a & (1<<i));
//      printf("temp:%d",temp);
        if(temp)
        reverse_num |= (1<<((32-1)-i));
        }

	reverse_num |= even_bits;
return reverse_num;
}

void displaybits(int x)
{       unsigned int MASK=0x80000000;
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
