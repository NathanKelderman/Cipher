#include <stdlib.h>
#include <stdio.h>

// search the first num characters in array charArray for character target
// return a non-zero integer if found, otherwise, return 0
int targetFound(char charArray[], int num, char target) {
        int tempCount = 0;
        int numDuplicates = 0;
        while (tempCount < num) {
                if (target == charArray[tempCount])
                        numDuplicates++;
                tempCount++;
        }
        return numDuplicates;
}


// remove duplicate characters in array word and return the result string
// caller has to free memory of returned array
char* removeDuplicates(char word[]) {
	char* final = (char*)malloc(1*sizeof(char));
	int count = 0;
	int freePosition = 0;
	while (word[count] != '\0') {
		if (targetFound(final, freePosition, word[count]) == 0) {
			final[freePosition] = word[count];
			freePosition++;
			char* tmp_final = realloc(final, freePosition*sizeof(char));
			final = tmp_final;
		}
		count++;
	}
	return final;
}

/*
// initialize the encrypt array with appropriate cipher letters according 
// to the given key
void initializeEncryptArray(char key[], char encrypt[]) {
	
}

// initialize the decrypt array with appropriate substitute letters based 
// on the encrypt array
void initializeDecryptArray(char encrypt[], char decrypt[]) {

}

// process data from the input file and write the result to the output file
// pass the encrypt array to parameter substitute if encryption is intended 
// pass the decrypt array to parameter substitute if decryption is intended
void processInput(FILE* inf, FILE* outf, char substitute[]) {

}
*/

