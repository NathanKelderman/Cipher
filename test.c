#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void initializeEncryptArray(char key[], char encrypt[]);
void initializeDecryptArray(char decrypt[], char encrypt[]);
void processInput(FILE* inf, FILE* outf, char substitute[]);

int main(int argc, char** argv) {

	FILE* inf = fopen(argv[3], "r");
	FILE* outf = fopen(argv[4], "w");
	char task = *argv[1];
	
	char encrypt[26];
	char decrypt[26];
	initializeEncryptArray(argv[2], encrypt);
	initializeDecryptArray(encrypt, decrypt);	
	if ( task == 'e')
		processInput(inf, outf, encrypt);
	else if ( task == 'd')
		processInput(inf, outf, decrypt);
	else
		puts("Invalid command.");
	
	fclose(inf);
	fclose(outf);



/*
	if ( argc < 5) {
		puts("Not enough command line arguments.");
		return 0;
	}
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
	
        char dec[6];
        for (int i = 0; i < 5; i++) {
        	dec[i] = decrypt[(enc[i])-65];
        }
	dec[5] = '\0';
        printf("\nplain: %s\n", dec);
*/
	return 0;
}
