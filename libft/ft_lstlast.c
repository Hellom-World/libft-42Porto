
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstcpy;

	lstcpy = lst;
	if (!lst)
		return 0;
	while (lstcpy->next != NULL)
			lstcpy = lstcpy->next;
	return (lstcpy);
}
