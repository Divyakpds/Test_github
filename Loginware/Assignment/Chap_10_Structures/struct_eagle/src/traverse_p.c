#include "main.h"

void traverse_p(struct plant* head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->plant_id);
        head = head->plink;
    }
    printf("NULL\n");
}
