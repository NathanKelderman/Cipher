#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

// search the first num characters in array charArray for character target
// return a non-zero integer if found, otherwise, return 0
int targetFound(char charArray[], int num, char target) {
        int tempCount = 0;
        while (tempCount < num) {
                if (target == charArray[tempCount])
                        return 1;
                tempCount++;
        }
        return 0;
}


// remove duplicate characters in array word and return the result string
// caller has to free memory of returned array
char* removeDuplicates(char word[]) {
	char* final = (char*)malloc(27*sizeof(char));
	int count = 0;
	int freePosition = 0;
	while (word[count] != '\0') {
		if (targetFound(final, freePosition, word[count]) == 0) {
			final[freePosition] = word[count];
			freePosition++;
		}
		count++;
	}
	final[freePosition] = '\0';
	return final;
}


// initialize the encrypt array with appropriate cipher letters according 
// to the given key
void initializeEncryptArray(char key[], char encrypt[]) {
	char* encrypt_ = removeDuplicates(key);
	int freePosition = 0;
	while ( encrypt_[freePosition] != '\0')
		freePosition++;
	int alphabet = 90;
	while (alphabet > 64 ) {
		if ( targetFound(encrypt_, freePosition, alphabet) == 0) {
			encrypt_[freePosition++] = alphabet;	
		}
		alphabet--;
	}
	strcpy(encrypt, encrypt_);
}

// initialize the decrypt array with appropriate substitute letters based 
// on the encrypt array
void initializeDecryptArray(char encrypt[], char decrypt[]) {
    	int i,j;
	
	for (i = 0; i <= 26; i++)
		for (j = 0; j <= 26; j++) {
			if (encrypt[j] == ((char)(i+65)))
				decrypt[i] = (char)(j+65);
		}
}

// process data from the input file and write the result to the output file
// pass the encrypt array to parameter substitute if encryption is intended 
// pass the decrypt array to parameter substitute if decryption is intended
void processInput(FILE* inf, FILE* outf, char substitute[]) {
	char p;
	while( (p = (char)fgetc(inf)) != EOF){
		p = substitute[(int)p-65];
		fprintf(outf, "%c", p);
	}
//	fprintf(outf, );
}
