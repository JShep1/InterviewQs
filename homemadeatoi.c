#include <stdio.h>
#include <stdlib.h>
#include "homemadeatoi.h"
int are_same(char *name1, char *name2, int name_len){
	int i = 0;
	
	for(i = 0; i < name_len; i++){
		if(*(name1+i) != *(name2+i)){

			return 0;
		}
	}
	
	return 1;
}

void printString(char *string){
	int i = 0;
	if(string == NULL){
		printf("String is null.\n");
		return;
	}
	while(*(string+i)!='\0'){
		printf("%c",*(string+i));
		i++;
	}
	printf("\n");
	return;
}
is_error_type allocString(char **string, int size){
	is_error_type status = NO_ERROR;
	*string = NULL;
	*string = (char *)malloc(sizeof(char) * size + 1);
	if(*string == NULL){
		status = ERROR;
		free(*string);
		printf("Could not allocate memory!\n");
	}
	return status;
}
char *populateString(int size){
	int a = 48, i= 0;
	char* string = NULL;

	if(allocString(&string,size) == ERROR){
		return NULL;
	}
	
	*(string + size) = '\0';
	for(i = 0; i < size; i++){
		*(string + i) = (i%10)+a;
	}
	return string;
}
int homemadeatoi(char *string){
	int isNeg = 0;
	int i = 0;
	int result = 0;
	int currentVal = 0;
	char currentChar = 0;
	*string = '-';
	if(*string == '-'){
		isNeg = 1;
		i++;
	}
	currentChar = *(string+i);
	while(currentChar!='\0'){
		if(currentChar >= 48 && currentChar <= 57){
			currentVal = currentChar - 48;
			result = result * 10 + currentVal;	
			i++;
			currentChar = *(string+i);
		}else{
			printf("Invalid input!\n");
			return -1;
		}
	}

	if(isNeg){
		result = ~result + 1;
	}
	return result;
		
}
int main(void){
	char* message = populateString(5);
	int i = -1;
	printString(message);
	i = homemadeatoi(message);
	printf("%d\n", i);
	free(message);
	return 0;
}
