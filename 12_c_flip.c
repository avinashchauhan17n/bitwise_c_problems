#include<stdio.h>

int flip(int,int);

int main()

{
	int a,b;
	printf("Enter A\n");
	scanf("%i",&a);
	printf("Enter B");
        scanf("%i",&b);
	printf("\n");
	printf("%d\n",flip(a,b));


}



int flip(int a, int b)
{ 
	int result;
	result=a^b;
	int count=0;
	while(result!=0)
	{
	result= result & (result-1);
	count++;
	}
	return count;
}

