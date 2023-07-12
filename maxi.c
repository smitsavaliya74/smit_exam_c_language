#include<stdio.h>

void main ()
{
	int number1;
	int number2;
	int number3;
	int n;
	int i;

	printf("please Enter the first number  :  ");
	scanf("%d",&number1);
	printf("please Enter the second number  :  ");
	scanf("%d",&number2);
	printf("please Enter the third number  :  ");
	scanf("%d",&number3);

		(number1>number2)?((number1>number3)?
		printf("Number 1 is maximum number : %d",number1):printf("Num 3 is maximum number : %d",number3)
		):((number2>number3)?
		printf("Num 2 is maximum number : %d",number2):printf("Num 3 is maximum number : %d",number3) 
		);


}
