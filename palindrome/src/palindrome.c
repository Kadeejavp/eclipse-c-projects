/*
 ============================================================================
 Name        : palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char word[100],length,i,flag=0;
	printf("enter a string");
	fflush(stdout);
	scanf("%s",word);
	length=strlen(word);
	for(i=0;i<length;i++){
		if(word[i]!=word[length-i-1]){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%s is a palindrome",word);
	}else{
		printf("%s is not a palindrome",word);
	}
	return EXIT_SUCCESS;
}
