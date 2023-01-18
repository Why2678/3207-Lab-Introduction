#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//srand((unassigned)time(0));

int main(){
	srand(32);
	short asciUpperCase = 65;
	short numLetters = 26;

	char example = (char)rand()%numLetters+asciUpperCase;

	printf("%c \n", example);






}
