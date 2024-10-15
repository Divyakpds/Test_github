#include "main.h"

void add_plant()
{
	int pos;
	int i;
	int n;
	int id;

	printf("Enter the number of plants to be added:");
	scanf("%d",&n);
	
	for(i = 0; i < n;i++)
	{
		printf("Enter the position to add plant %d:",i+1);
		scanf("%d",&pos);
		printf("ENter the Plant ID:");
		scanf("%d",&id);

		struct plant* new_plant = (struct plant*)malloc(sizeof(struct plant));

		new_plant->plant_id = id;
		new_plant->plink = NULL;
		new_plant->mlink = NULL;
	
		if(pos < 1)
		{
			printf("Invalid position!\n");
			return;
		}

		if(pos == 1)
		{
			new_plant->plink = p_start;
			p_start = new_plant;
		}
		else
		{
			struct plant* temp = p_start;
			int i = 1;

			while(temp != NULL && i<pos-1)
			{
				temp = temp->plink;
				i++;
			}

			if(temp == NULL)
			{
				printf("Position is out of bounds!\n");
//				free(new_plant);
				return;
			}
			new_plant->plink = temp->plink;
			temp->plink = new_plant;
		}
		printf("\n");
	}
	printf("Plants added successfully\n");
}
