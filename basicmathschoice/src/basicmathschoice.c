/*
 ============================================================================
 Name        : positive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	    int num1,num2;
		int choice,result;
		printf("enter two numbers");
		fflush(stdout);
		scanf("%d%d",&num1,&num2);
		printf("1 for addition /n2 for subtraction /n3 for multiplication /n4 for division /nenter your choice");
		fflush(stdout);
		scanf("%d",&choice);
		if(choice==1){
			result=num1+num2;
		}else if(choice==2){
			result=num1-num2;
		}else if(choice==3){
			result=num1*num2;
		}else if(choice==4){
			result=num1/num2;
		}
		else{
			printf("fool");
		}
		printf("result=%d",result);

	return EXIT_SUCCESS;
}
