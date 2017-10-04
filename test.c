#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

void initializeEncryptArray(char key[], char encrypt[]);
void initializeDecryptArray(char decrypt[], char encrypt[]);

int main(int argc, char** argv) {

//	if ( argc < 5) {
//		puts("Not enough command line arguments.");
//		return 0;
//	}
	char word[] = "FEATHER";	
	
	char encrypt[26];
	initializeEncryptArray(word, encrypt);
	printf("Encrypt: %s", encrypt);
	
	char decrypt[26];
        initializeDecryptArray(encrypt, decrypt);
       	printf("\nDecrypt: %s", decrypt);
	
	char plain[5] = "HELLO";
	char enc[6];
	for (int i = 0; i < 5; i++) {
		enc[i] = encrypt[(plain[i])-65];
	}
	enc[5] = '\0';
	printf("\nenc: %s\n", enc);
	
        char dec[5];
        for (int i = 0; i < 5; i++) {
        	dec[i] = decrypt[(enc[i])-65];
        }
        printf("\nplain: %s\n", dec);

	return 0;
}
