#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

void initializeEncryptArray(char key[], char* encrypt[]);
void initializeDecryptArray(char decrypt[], char encrypt[]);

int main(int argc, char** argv) {

//	if ( argc < 5) {
//		puts("Not enough command line arguments.");
//		return 0;
//	}
	char word[] = "FEATHER\0";	
	char* encrypt = (char*)malloc(26*sizeof(char));
	initializeEncryptArray(word, &encrypt);
	int count = 0;
	puts("Encrypt: ");
	while(encrypt[count] != '\0') {
		printf("%c", encrypt[count]);
		count++;
	}
	char decrypt[26];
        initializeDecryptArray(encrypt, decrypt);
        count = 0;
	puts("\nDecrypt: ");
        while(count <= 25) {
                printf("%c", decrypt[count]);
                count++;
        }
	puts("\n");
	
	
	
	return 0;
}
