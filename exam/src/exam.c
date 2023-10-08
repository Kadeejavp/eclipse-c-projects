/*
 ============================================================================
 Name        : exam.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	printf("enter your mark");
	fflush(stdout);
	scanf("%f",&mark);
	if(mark>=50){
		printf("the student has passed");
	}else{
		printf("the student has failed");
	}
	return EXIT_SUCCESS;
}
