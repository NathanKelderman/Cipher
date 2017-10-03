

// remove duplicate characters in array word and return the result string
char* removeDuplicates(char word[]) {
	int size = sizeof(word);
	char* final[size];
	int count = 0;
	freePosition = 0;
	while (word[count] != "\0") {
		int tempCount = 0;
		int numDuplicates = 0
		while (tempCount < freePosition) {
			if (word[count] == final[tempCount])
				numDuplicates++;
			tempCount++;
		}
		if (numDuplicates == 0) {
			final[freePosition] = word[count];
			freePosition++;
		}
		count++;	
	}
	return final;
}

// search the first num characters in array charArray for character target
// return a non-zero integer if found, otherwise, return 0
int targetFound(char charArray[], int num, char target) {
	return 0;
}

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


