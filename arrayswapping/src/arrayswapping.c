/*
 ============================================================================
 Name        : arrayswapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,array1[100],array2[100],i,temp;
	printf("enter the size of the arrays");
	fflush(stdout);
	scanf("%d",&limit);
	printf("enter the values of Array 1");
	fflush(stdout);
	for(i=0;i<limit;i++){
		scanf("%d",&array1[i]);
	}
	printf("enter the values of Array 2");
	fflush(stdout);
	for(i=0;i<limit;i++){
		scanf("%d",&array2[i]);
	}
	for(i=0;i<limit;i++){
		temp=array1[i];
		array1[i]=array2[i];
		array2[i]=temp;
	}
	printf("Arrays after swapping");
	printf("\n");
	printf("Array1:");
	for(i=0;i<limit;i++){
		printf("%d,",array1[i]);
	}
	printf("\n");
	printf("Array2:");
	for(i=0;i<limit;i++){
		printf("%d,",array2[i]);
	}
	return EXIT_SUCCESS;
}
