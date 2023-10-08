/*
 ============================================================================
 Name        : arrayaddingg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,values[100],sum=0;
	printf("enter limit");
	fflush(stdout);
	scanf("%d",&limit);
	printf("enter values");
	fflush(stdout);
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	for(i=0;i<limit;i++){
		sum=sum+values[i];
	}
	printf("sum of the array is %d",sum);



	return EXIT_SUCCESS;
}
