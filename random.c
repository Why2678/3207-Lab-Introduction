#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar();

int main(){
	char my_char = randchar;
	printf("%c \n", my_char);

}

char randchar(){
	srand((unsigned)time(0));
	short asciUpperCase = 65;
	short numLetters = 26;

	char example = (char)(rand()%numLetters+asciUpperCase);

	return example;
}