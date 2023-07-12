 // Q.WAP to print all numbers that are divisible by both 3 & 5 from a given range using UDF.

#include<stdio.h>


int div (){
	
	int i;
	printf("In range of 1 to 15 the divisible number are here...\n");
	
	for (i=1;i<=100;i++)
	{
		if(i%3==0 && i%5==0){
			
			printf(" The number %d is divisible by both 3 & 5 ...\n",i);
			
		}
		
	}
	
	
	
	
	
	
	
	
	
}

void main (){
	
	div();
}


