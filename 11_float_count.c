// count  bits set in a floating point number?


#include<stdio.h>
#include<math.h>    
int int_part(long double);
int float_part(float);
int main()
{	int f;
	float a;
	printf("enter a number\n");
	scanf("%f",&a);
	printf("\n\n Integer part 1's: %d\n\n fractinal part 1's: %d\n\n Total 1's:%d \n\n",int_part(a), float_part(a) ,(int_part(a)+float_part(a)) );
//	printf("%d",float_part(a));
}

int int_part(long double x)
{	int result=x;
	int count=0;
	while(result!=0)
	{
	result= (result) & (result-1) ;
	count++;
	}
	return count;
}

int float_part(float x)
{   
	
	float fractional_part; 
	int decimal_part;
	 decimal_part=x;
	float combined_fraction;
	combined_fraction=x;


	float temp_float;
	int count_frac_1=0;         
	int dec_1;  

	fractional_part=combined_fraction-decimal_part;         

	while(fractional_part !=0)
	{
		fractional_part=combined_fraction-decimal_part;
		temp_float=(fractional_part*2);
		dec_1=temp_float;
			if((dec_1 & 0x1)==1)
			count_frac_1++;

		combined_fraction=temp_float; 

		decimal_part=(int)temp_float;
		
	}
//		printf("%d\n\n",count_frac_1);
		
	return count_frac_1;

}
