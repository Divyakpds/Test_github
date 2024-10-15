#include "main.h"

void traverse_m(struct machine* head)
{
    	struct machine* temp = head;
    	if (head == NULL)
	{		
		return;
	}
    	do
       	{
		printf("%d -> ", temp->machine_id);
		temp = temp->mlink;
    	} while (temp != head);
    
	printf("(back to start)\n");
}
