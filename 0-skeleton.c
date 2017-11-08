/*
SKELETON SETUP FOR ENCRYPTION AND DECRYPTION PROGRAMS
Author: keshav.dulal@gmail.com
*/

//imports
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//function declaration
void encrypt(char[], int);
void decrypt(char[], int);

//entry point of the program
int main(){
	//variable declarations
	char MESSAGE[100];
	int key = 0;

	//asking user for inputs and storing them in the variables

	//calling the encryption function
	encrypt(MESSAGE,key);

	//calling the decryption function
	decrypt(MESSAGE,key);

	return 0;
}

//encryption function
void encrypt(char arr[], int key){
	//encryption logic goes here
}

//decryption function
void decrypt(char arr[], int key){
	//Decryption logic goes here
}
