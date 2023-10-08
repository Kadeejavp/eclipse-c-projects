/*
 ============================================================================
 Name        : functionwithoutargumentwithreturnvalue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	int result;
	result=sum();
	printf("result is %d",result);
	return EXIT_SUCCESS;
}
int sum(){
	int a,b,result;
	printf("enter 2 numbers");
	fflush(stdout);
	scanf("%d%d",&a,&b);
	result=a+b;
	return result;

}
