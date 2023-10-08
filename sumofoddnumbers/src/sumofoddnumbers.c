/*
 ============================================================================
 Name        : sumofoddnumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,sum=0;
	printf("enter a limit");
	fflush(stdout);
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(i%2!=0){
			sum=sum+i;
		}

	}
	printf("sum of odd numbers=%d\n",sum);

	return EXIT_SUCCESS;
}
