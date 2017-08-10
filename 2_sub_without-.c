#include<stdio.h>
int main()
{
int a,b,result;
printf("Number\n");
scanf("%d",&a);

printf("Number to be subtracted\n");
scanf("%d",&b);
// a-b= a+ 2's comp b
result= a + ~b+1;
printf("result: %d\n",result);
printf("comp: of a and b is %d and %d",~a,~b);

}
