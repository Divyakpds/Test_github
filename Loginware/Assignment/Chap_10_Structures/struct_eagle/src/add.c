#include "main.h"

void add()
{
	int choice;

	printf("1.Add plant\n");
	printf("2.Add machine\n\n");

	printf("Enter the choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			add_plant();
			break;

		case 2:
			add_machine();
			break;

		default:
			printf("Invalid choice!\n");
	}
	printf("\n");

}
