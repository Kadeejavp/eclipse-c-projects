/*
 ============================================================================
 Name        : functionwithargumentwithoutreturnvalue1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum(int,int);
int main(void) {
	int a,b;
	printf("enter 2 numbers");
		fflush(stdout);
		scanf("%d%d",&a,&b);
		sum(a,b);
	return EXIT_SUCCESS;
}
void sum(int num1,int num2){
	int result;
	result=num1+num2;
	printf("result is %d",result);
}
