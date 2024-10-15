#include "main.h"

struct machine* m_start = NULL;
struct plant* p_start = NULL;

int main()
{
	int choice;

	while(1)
	{
		display_menu();

		printf("Enter the choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				create_plant(p_start);
				break;

			case 2:
				add();
				break;

			case 3:
				deletee();
				break;

			case 5:
				display(p_start,m_start);
				break;

			case 8:
				exit(0);

			default:
				printf("Invalid choice!!\n");
		}
	}
}
