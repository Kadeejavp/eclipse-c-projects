/*
 ============================================================================
 Name        : sumof2arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,i,j,a1[100][100],a2[100][100],sum[100][100];
	printf("enter the size of the arrays");
	fflush(stdout);
	scanf("%d",&size);
	printf("enter the values of array1");
	fflush(stdout);
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&a1[i][j]);
		}
	}
	printf("enter the values of array2");
	fflush(stdout);
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&a2[i][j]);
		}
		}
	printf("sum of 2 arrays is");
	printf("\n");
	fflush(stdout);
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
		sum[i][j]=a1[i][j]+a2[i][j];
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d\t",sum[i][j]);
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
