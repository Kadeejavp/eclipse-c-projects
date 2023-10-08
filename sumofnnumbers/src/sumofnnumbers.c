/*
 ============================================================================
 Name        : sumofnnumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n;
	int sum=0;
	printf("enter a number");
	fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("%d",sum);

	return EXIT_SUCCESS;
}


