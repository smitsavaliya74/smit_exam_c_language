// Q . WAP to find the factorial of a given number using a pointer.

#include<stdio.h>

void main (){
	
	int i,n;
	int ans=1;
	int *ptr;
	
	
	printf("enter the number :- ");
	scanf("%d",&n);
		
	for (i=1;i<=n;i++){
		
	ans *=i ;	
		
		
	}
	ptr = ans;
	printf("The given number's factorial is %d",ptr);
		
}
