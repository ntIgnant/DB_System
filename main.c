#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NAME_BUF 50
#define PHONE_BUF 20


typedef struct Contact
{
	int id;
	char name[NAME_BUF];
	char phone[PHONE_BUF];

	struct Contact *next; // Pointer to the next Contact

}Contact;

int main()
{
	int menu_choice;

	printf("===== Simple Database System =====\n");
	printf("1. Add Record\n");
	printf("2. Display Records\n");
	printf("3. Search Record\n");
	printf("4. Update Record\n");
	printf("5. Delete Record\n");
	printf("6. Exit\n");

	printf("Enter your Choice: ");
	scanf("%d", & menu_choice);

	//swtitch menu_choice


	return(0);
}