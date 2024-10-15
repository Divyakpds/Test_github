#include "main.h"

void create_plant(struct plant* head)
{
	int n, m;
    	int ele_p, ele_m;
	char p_name;

    	struct plant* phead = NULL;
    	struct plant* new_p;
	
	printf("\n");
	printf("Enter the number of plants: ");
    	scanf("%d", &n);
	printf("\n");
	
	for(int i=0;i<n;i++)
	{
    		struct plant* temp_p = (struct plant*)malloc(sizeof(struct plant));
    	        //struct Node* new = (struct Node*)malloc(sizeof(struct Node));
		
		printf("\nEnter the plant %d id :",i+1);
    		scanf("%d",&ele_p);
		printf("Enter the plant name:");
		scanf("%s",p_name);
    		temp_p->plant_id = ele_p;
		temp_p->plant_name = p_name;
    		temp_p->plink = NULL;
//		printf("\n");

		struct machine *mhead = NULL;
		struct machine *last = NULL;
//    		temp_p->mlink = mhead;

		printf("Enter the number of machines :");
    		scanf("%d",&m);

		for(int j=0;j<m;j++)
    		{
			printf("\n");	
    			printf("Enter the machine %d id :",j+1);
    			scanf("%d",&ele_m);

			printf("Enter the start time:");
			scanf("%d",&start_t);
			printf("Enter the stop time:");
			scanf("%d",&stop_t);


    	
			struct machine* temp_m = (struct machine*)malloc(sizeof(struct machine));
//    			struct machine* mhead = NULL;
//    			struct machine *new_m;
    
			temp_m->machine_id = ele_m;
    			temp_m->mlink = NULL;
			temp_m->start_time = start_t;
			temp_m->stop_time = stop_t;

			if (mhead == NULL)
	    		{
				mhead = temp_m;
	    		}
	    		else
	    		{
				last->mlink = temp_m;
	    		}
	    		last = temp_m;
    		}
		if(last != NULL)
		{
    			last->mlink = mhead;
		}
		temp_p->mlink = mhead;
    
//		traverse_p(phead);
//		traverse_m(mhead);
    
		if(phead == NULL)
    		{
    			phead = temp_p;
    		}
    		else
    		{
    			new_p = phead;
    			while(new_p->plink != NULL)
    			{
    				new_p = new_p->plink;
    			}
    			new_p->plink = temp_p;
    		}
	}
	p_start = phead;
	
//	traverse_p(phead);
	printf("\n");
}
