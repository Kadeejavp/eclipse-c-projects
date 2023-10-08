/*
 ============================================================================
 Name        : grade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float totalmark;
		printf("enter your total mark percentage");
		fflush(stdout);
		scanf("%f",&totalmark);
		if(totalmark>=90){
			printf("grade obtained is A");
		}else{
			printf("invalid mark");
		}

	return EXIT_SUCCESS;
}
