/*
 ============================================================================
 Name        : arraysortdescending.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,array[100],i,j,temp;
		printf("enter the size of an array");
		fflush(stdout);
		scanf("%d",&size);
		printf("enter the values of array");
		fflush(stdout);
		for(i=0;i<size;i++){
			scanf("%d",&array[i]);
		}
		for(i=0;i<size-1;i++){
			for(j=i+1;j<size;j++){
				if(array[i]<array[j]){
					temp=array[i];
					array[i]=array[j];
					array[j]=temp;
				}
			}

		}
		printf("sorted array:");
		printf("\n");
		for(i=0;i<size;i++){
			printf("%d,",array[i]);
		}
	return EXIT_SUCCESS;
}
