#include<stdio.h>

int even_odd(int);

int main()
{
	int a;
	printf("NUMBER\n");
	scanf("%d",&a); 

	if(even_odd(a))
		printf("EVEN\n");
	else
		printf("ODD\n");
}

int even_odd(int a)
{
	if(a&0x1)
	return 0;
	else
	return 1;



}
