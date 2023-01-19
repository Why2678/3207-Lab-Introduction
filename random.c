#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar(); // fn prototype

/*int main()
{
	srand((unsigned)time(0));  // seed the random number generator with the current time
	char my_char = randchar(); // calls the randchar function
	printf("%c \n", my_char);
}
*/
char randchar()
{
	short asciUpperCase = 65; // ASCII value for A
	short numLetters = 26;	  // Letters in the alphabet

	char example = (char)(rand() % numLetters + asciUpperCase);
	// generates a number between 65 and 90, returns it as a char

	return example; // returns a time based random upper-case letter
}