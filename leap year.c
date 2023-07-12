#include<stdio.h>

main ()
{

	int first;
	int last;

	printf("Enter the first year :- ");
	scanf("%d",&first);

	printf("Enter the last year :- ");
	scanf("%d",&last);

	FILE *ptr;
	int leapyear[100];

	int i;


	ptr = fopen("leapyear.txt","w");

	if(ptr == NULL){
		printf("File cannot open...'");
	}

	for(i=first;i<=last;i++){
		if(i%4==0){

		fprintf(ptr,"%d\t",i);
		}

	}
	
}
