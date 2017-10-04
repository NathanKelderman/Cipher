#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

void initializeEncryptArray(char key[], char* encrypt[]);
char* removeDuplicates(char word[]);
int main(int argc, char** argv) {
	char word[10] = "HELLOGHGHG";	
	char* encrypt;
	initializeEncryptArray(word, &encrypt);
//	int count = 0;
//	char* encrypt = removeDuplicates(word);
//	while(encrypt[count] != '\0') {
//		printf("\n%c\n", encrypt[count]);
//		count++;
//	}
	return 0;
}
