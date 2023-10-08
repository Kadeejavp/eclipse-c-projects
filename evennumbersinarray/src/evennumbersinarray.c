/*
 ============================================================================
 Name        : evennumbersinarray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,array[100],i,flag=0;
	printf("enter the size of an array");
	fflush(stdout);
	scanf("%d",&limit);
	printf("enter the values of array");
	fflush(stdout);
	for(i=0;i<limit;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<limit;i++){
		if(array[i]%2==0){
			flag++;
		}
	}
	printf("number of even numbers in the given array is %d",flag);
	return EXIT_SUCCESS;
}
