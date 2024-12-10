#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char* name;

	name = malloc(sizeof(char) * 100); // Dynamically allocate 100 bytes of memmory (100 * (char = 1))

	if(name == NULL){
		printf("Memory allocation failed\n");
		exit(1);
	}

	printf("Please enter a name: ");

	// Codewars code should start from here
	fgets(name, 100, stdin);

	if(name[0] == '\0' || name[0] == '\n' && name[1] == '\0'){ // Check if the content of the string is empty or blankspaced (terminated with null-line-char)
		printf("Hello, World!\n");
	}
	else{
		name[strcspn(name, "\n")] = '\0'; // Remove the newline char and replace it for a nullchar
		for(int i = 0; i < strlen(name); i++){
			name[i] = tolower(name[i]); // For this point, the name should be in lowercase
		}

		// Set the first character to uppercase
		name[0] = toupper(name[0]); // alice -> Alice

		printf("Hello, %s!\n", name);
	}

	return(0);
}