#include "main.h"

void display(struct plant* p_head,struct machine* m_head)
{
	struct plant* ptemp = p_start;
	while(ptemp != NULL)
	{
		printf("\nPlants ID:%d -> Machines:",ptemp->plant_id);
		if(ptemp->mlink != NULL)
		{
			traverse_m(ptemp->mlink);
		}
		else
		{
			printf("No machines\n");
		}

		ptemp = ptemp->plink;
	}
	printf("\n");
}
