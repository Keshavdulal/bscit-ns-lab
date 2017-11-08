#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define VAL(PTR) (*PTR)

typedef char* STRING;
typedef char** STRING_REF;

void flush_stdin()
{
	while(fgetc(stdin) != '\n');
}

void rail_fence_encrypt(STRING_REF str, int depth)
{
	STRING old_str = VAL(str);
	int len_str = strlen(old_str), itr_str, rows, cols;
	STRING res_str = (STRING)malloc(sizeof(char)*len_str);
	for(rows = 0, itr_str = 0 ; rows < depth ; ++rows)
	{
		for(cols = rows ; cols < len_str ; cols += depth)
		{
			res_str[itr_str] = old_str[cols];
			++itr_str;
		}
	}
	res_str[itr_str] = '\0';
	free(VAL(str));
	VAL(str) = res_str;
}

void rail_fence_decrypt(STRING_REF str, int depth)
{
	STRING old_str = VAL(str);
	int len_str = strlen(old_str), itr_str, rows, counter;
	STRING res_str = (STRING)malloc(sizeof(char)*len_str);
	for(counter = 0, itr_str = 0 ; counter < len_str/depth ; ++counter)
	{
		for(rows = counter ; rows < len_str ; rows+=(len_str/depth))
		{
			res_str[itr_str] = old_str[rows];
			++itr_str;
		}
	}
	free(VAL(str));
	VAL(str) = res_str;
}

int main(void)
{
	STRING str;
	int txt_length, key;

	printf("Enter the depth: ");
	scanf("%d",&key);

	printf("Enter the length of the text: ");
	scanf("%d",&txt_length);

	printf("Input the string you want to encrypt: ");
	flush_stdin();
	str = (char*)malloc((txt_length+1)*sizeof(char));
	fgets(str,txt_length+1,stdin);

	rail_fence_encrypt(&str,key);
	printf("\nThe encrypted text is: %s",str);

	rail_fence_decrypt(&str,key);
	printf("\nThe decrypted text is: %s",str);

	return 0;
}
