#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

/*
 * Brady Lange
 * 4/16/18
 * File name: guess2.c
 * This program makes you guess the correct number given between 1 and 10,000 until its correct. Exit commands will be caught and not executed.
 */
 
 //Function that handles signals
 void signalHandler(int sigNum)
 {
	if(sigNum == SIGINT)
	{
		printf("\nYou cannot exit the program using the command CTRL + C.\n");
	}
 }

 //Main function
 int main()
 {
	 //Seeding the rand() function 
	 srand(9);
	 
	 //Variables
	 char input[5];
	 int charToInt = 0;
	 //Generating a random number as the key for the user to guess
	 int key = (rand() % (10000 + 1 - 0) + 0); //Maximum number + 1 - minimum number + minimum number
	 
	 if(signal(SIGINT, signalHandler) == SIG_ERR)
		printf("Failed to catch the SIGINT!");
	 
	 //Looping until the user enters the correct number
	 while(key != charToInt)
	 {
		 printf("Guess a number between 1 and 10,000 until you're right.\n");
		 scanf("%s", input);
		 charToInt = atoi(input);
		 if(key != charToInt)
			 printf("Wrong number. Please guess again!\n");
	 }
	 
	 //If the user enters the correct number this line will be executed
	 printf("Congratulations! You have guessed the correct number: %d\n", charToInt);
	 
	 return 0;
	 
 }
 