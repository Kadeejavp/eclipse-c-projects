/*
 ============================================================================
 Name        : checkforprime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,flag=0;
	printf("enter a number");
	fflush(stdout);
	scanf("%d",&n);
	for(i=2;i<n/2;i++){
		if(n%i==0){
		flag=1;
		break;
	}
	}
	if(flag==0){
		printf("%d is a prime number",n);
	}
	else{
		printf("%d is not a prime number",n);
	}
	return EXIT_SUCCESS;
}
