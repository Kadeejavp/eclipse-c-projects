/*
 ============================================================================
 Name        : multiplicationtable.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,result;
		printf("enter a number");
		fflush(stdout);
		scanf("%d",&num);
		for(i=1;i<=10;i++){
			result=i*num;
					printf("%d*%d=%d\n",i,num,result);	}
	return EXIT_SUCCESS;
}
