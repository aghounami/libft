/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:30:28 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/05 15:56:30 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include "libft.h"
#include <stdio.h>

int main()
{
t_list *list = ft_lstnew("First Element");
if (list == NULL)
{
perror("Error creating list");
return 1;
}
ft_lstadd_front(&list, ft_lstnew("New Element 1"));
ft_lstadd_front(&list, ft_lstnew("New Element 2"));
ft_lstadd_front(&list, ft_lstnew("New Element 3"));

t_list *current = list;
while (current)
{
printf("Element: %s\n", (char *)current->content);
current = current->next;
}

return 0;
}*/