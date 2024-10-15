#include "main.h"

void add_machine()
{
	int p_id;
	int m_id;
	int n;
	int m;
	int i;


	struct plant* p_temp = p_start;

	printf("Enter the Plant ID where machine to be added:");
	scanf("%d",&p_id);

	while(p_temp != NULL && p_temp->plant_id != p_id)
	{
		p_temp = p_temp->plink;
	}

	if(p_temp != NULL)
	{
		printf("Plant with ID %d found. Adding machine...\n", p_id);

		printf("Enter the number of machine to be added:");
		scanf("%d",&m);

		for(i = 0;i < m;i++)
		{
			struct machine* new_machine = (struct machine*)malloc(sizeof(struct machine));

			printf("Enter machine ID %d:",i+1);
			scanf("%d",&m_id);

			new_machine->machine_id = m_id;
			new_machine->mlink = NULL;

			if(p_temp->mlink == NULL)
			{
				p_temp->mlink = new_machine;
				new_machine->mlink = new_machine;
			}
			else
			{
				struct machine* m_temp = p_temp->mlink;

				while(m_temp->mlink != p_temp->mlink)
				{
					m_temp = m_temp->mlink;
				}
				m_temp->mlink = new_machine;
				new_machine->mlink = p_temp->mlink; 
			}
		}
		printf("Machine added successfully!\n");
	}
	else
	{
		printf("Plant not found!\n");
		return;
	}
}
