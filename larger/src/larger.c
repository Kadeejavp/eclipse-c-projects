/*
 ============================================================================
 Name        : larger.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3;
	printf("enter three numbers");
	fflush(stdout);
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2){
		if(num1>num3){
		printf("%d is larger",num1);}
	else{
		printf("%d is larger",num3);}}
	else{if(num2>num3){
		printf("%d is larger",num2);
	}else{
		printf("%d is larger",num3);
	}}
	return EXIT_SUCCESS;
}
