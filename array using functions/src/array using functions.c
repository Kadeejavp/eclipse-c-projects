/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void get();
void disp();
int main(void) {
	get();
	disp();
	return EXIT_SUCCESS;
}

void get(){
	int limit,i,values[100];
	printf("enter the limit of the array");
	fflush(stdout);
	scanf("%d",&limit);
	printf("enter the values of the array");
	fflush(stdout);
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
}
void disp(){
	int i,limit,values[100];
	for(i=0;i<limit;i++){
		printf("%d\t",values[i]);
	}
}
