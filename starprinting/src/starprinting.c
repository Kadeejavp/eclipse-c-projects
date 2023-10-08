/*
 ============================================================================
 Name        : starprinting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,j;
	printf("enter a number");
	fflush(stdout);
	scanf("%d",&n);
	for(i=n;n>0;i--){
		for(j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
