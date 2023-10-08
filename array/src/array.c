/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,a[100];
		int limit;
			printf("enter array limit");
			fflush(stdout);
			scanf("%d",&limit);
			printf("enter the values");
			fflush(stdout);
			for(i=0;i<limit;i++){
				scanf("%d",&a[i]);
			}

			printf("entered values are");


			for(i=0;i<limit;i++){
				printf("\n%d\n",a[i]);
			}
	return EXIT_SUCCESS;
}
