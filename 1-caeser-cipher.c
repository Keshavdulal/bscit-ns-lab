/*
CAESER CIPHER
Author: keshav.dulal@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//function declaration
void encrypt(char[], int);
void decrypt(char[], int);

//entry point of the program
int main(){
	//variable declarations
	char MESSAGE[100];
	int key = 0;

	//asking user for inputs and storing them in the variables
	printf("Enter your message:");
	gets(MESSAGE);
	printf("Enter your key:");
	scanf("%d",&key);
	key = (key%26);


	//calling the encryption function
	printf("Encrypted Version\n");
	encrypt(MESSAGE,key);
	printf("%s",MESSAGE);

	//calling the decryption function
	printf("\nDecrypt Version\n");
	decrypt(MESSAGE,key);
	printf("%s",MESSAGE);

	return 0;
}

//encryption function
void encrypt(char arr[], int key){
	int i;
	for(i=0;i<strlen(arr);i++){
		arr[i] = arr[i] - key;
	}
}

//decryption function
void decrypt(char arr[], int key){
	int i;
	for(i=0;i<strlen(arr);i++){
		arr[i] = arr[i] + key;
	}
}
