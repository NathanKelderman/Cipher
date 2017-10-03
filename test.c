#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

char* removeDuplicates(char word[]);

int main(int argc, char** argv) {
	char word[21] = "xaaabxbbccbxbbccxcccc";	
	char* final = removeDuplicates(word);
	int count = 0;
	while(final[count] != '\0') {
		printf("\n%c\n", final[count]);
		count++;
	}
	free(final);
	return 0;
}
