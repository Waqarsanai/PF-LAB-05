#include <stdio.h>

	int main() {

		    char character, encrypted, decrypted;
		    char key = 'K';
		
		    printf("Enter a character to encrypt: ");
		    scanf("%c", &character);
		
		    encrypted = character ^ key;
		    printf("Encrypted character: %c\n", encrypted);
		
		    decrypted = encrypted ^ key;
		    printf("Decrypted character: %c\n", decrypted);
		
	    return 0;
	}
