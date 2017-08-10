// Swap any two numbers using bitwise operators. How it works?:
#include<stdio.h>
void swap(int, int);

int main()
{
int num1,num2;

printf("enter first number\n");
scanf("%d",&num1);

printf("enter second number\n");
scanf("%d",&num2);
swap(num1,num2);
}

void swap(int number1, int number2)
{
number1 = number1 ^ number2;
number2 = number1 ^ number2;
number1 = number1 ^ number2;

printf("Number1:%d\n",number1);
printf("Number2:%d\n",number2);

}
