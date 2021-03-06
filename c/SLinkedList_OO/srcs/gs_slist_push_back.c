#include "gs_slist.h"
#include "gs_prototypes.h"

void		gs_slist_push_back(t_slist *list, void *data)
{
	t_snode *tmp;

	if (list && (tmp = gs_snode_create(data)))
	{
		if (gs_slist_isempty(list))
		{
			list->head = tmp;
			list->tail = tmp;
		}
		else
		{
			list->tail->next = tmp;
			list->tail = tmp;
		}
		list->size += 1;
	}
}
