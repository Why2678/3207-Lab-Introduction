#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar();

//srand((unsigned)time(0));

int main(){
	//srand((unsigned)time(0));

	printf("%c \n", randchar);

}

char randchar(){
	srand((unsigned)time(0));
	short asciUpperCase = 65;
	short numLetters = 26;

	char example = (char)(rand()%numLetters+asciUpperCase);

	return example;
}