//3. WAP implement addition functionality with out using ADD('+') Operator.
#include<stdio.h>
int main()
{
int a,b,result;

printf("Two no\n");
scanf("%d %d",&a, &b);

// a + b 1111 + 0000 = 1111

//result = a-(~b)-1;

result = a|b - 1;


printf("%d\n",result);
}
