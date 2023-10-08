/*
 ============================================================================
 Name        : string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[20];
	printf("enter a name");
	fflush(stdout);
	scanf("%s",name);
	printf("entered name is %s",name);

	return EXIT_SUCCESS;
}
