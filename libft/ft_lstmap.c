
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*box;

	if (!f || !del)
		return NULL;
	newlist = NULL;

	while (lst)
	{
		box = ft_lstnew(f(lst->content));
		if (!box)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, box);
		lst = lst->next;
	}
	return (newlist);
}
