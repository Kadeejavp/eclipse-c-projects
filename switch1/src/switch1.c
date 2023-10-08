/*
 ============================================================================
 Name        : switch1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	    int choice;
		printf("1 for porotta \n2 for biriyani \n3 for friedrice \n4 for mandhi \nenter your choice");
		fflush(stdout);
		scanf("%d",&choice);
		switch(choice){
		case 1:
			printf("you have selected porotta");
			break;
		case 2:
			printf("you have selected biriyani");
			break;
		case 3:
			printf("you have selected friedrice");
			break;
		case 4:
			printf("you have selected mandhi");
			break;
		default:
			printf("fool");
		}
	return EXIT_SUCCESS;
}
