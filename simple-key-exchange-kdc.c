//Header Imports
#include<stdio.h>

//function declaration
int sendKeyRequestToKDC(int, int, int);
int sendSessionKeyToA(int);
int sendSessionKeyToB(int);
int sendNonceToA(int);
int replyNonceToB(int);

int Encryption(int, int);
int Decryption(int, int);

int temp = 0;

//entry point
int main(){
	// IDs
	int IDa = 65;
	int IDb = 66;
	int Na = 47386;
	printf("\n\n");
	printf("At A\n");
	printf("Step 1: A sends a Request to KDC.\n Params IDa, IDb and Na\n");
	printf("%d %d %d\n", IDa, IDb, Na);

	printf("\nPress key to continue");
	scanf("%d",&temp);

	sendKeyRequestToKDC(IDa, IDb, Na);

	return 0;
}

int sendKeyRequestToKDC(int IDa, int IDb, int Na){
	printf("\n\n");
	printf("At KDC\n");
	int Ks = 7;
	printf("KDC received IDa, IDb and Na\n");
	printf("%d %d %d\n", IDa, IDb, Na);

	printf("Step 2: KDC sends Session Key(Ks):%d to A\n", Ks);

	printf("\nPress key to continue");
	scanf("%d",&temp);

	sendSessionKeyToA(Ks);
	return 0;
}

int sendSessionKeyToA(int Ks){
	printf("\n\n");
	printf("At A\n");
	printf("Session Key received: %d\n, Now Sending session key to B",Ks);

	printf("\nPress key to continue");
	scanf("%d",&temp);
	sendSessionKeyToB(Ks);
	return 0;
}

int sendSessionKeyToB(int Ks){
	printf("\n\n");
	printf("At B\n");
	int Nb = 51423;
	printf("Step 3: B Received Session Key and sending Nonce(Nb) to A\n");
	printf("Session Key: %d\n",Ks);

	printf("\nPress key to continue");
	scanf("%d",&temp);

	sendNonceToA(Nb);
	return 0;
}

int sendNonceToA(int Nb){
	printf("\n\n");
	printf("At A\n");
	printf("Step 4: A Received Nonce(Nb) and now it is sending it back to B\n");
	printf("Nonce: %d\n",Nb);

	printf("\nPress key to continue");
	scanf("%d",&temp);
	replyNonceToB(Nb);
	return 0;
}

int replyNonceToB(int Nb){
	printf("\n\n");
	printf("At B\n");
	printf("Step 5: B Received Nonce(Nb)\n");
	printf("Nonce: %d\n",Nb);
	printf("\n\n***Now Further communication can be established***\n");

	printf("\nPress key to continue");
	scanf("%d",&temp);
	return 0;
}

int Encryption(int PT, int key){
	int CT = PT + key;
	return CT;
}

int Decryption(int CT, int key){
	int PT = CT - key;
	return CT;
}
