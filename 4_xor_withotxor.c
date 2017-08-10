//4. WAP implement XOR functionality with out using XOR(^) operator.

#include<stdio.h>
int main()
{int a,b,result;
printf("TWO No\n");
scanf("%d %d",&a,&b);
result= a&(~b) | b&(~a);
// a xor b= a*~b + b*~a;
printf("%d\n",result);

}
