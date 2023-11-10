/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:53:21 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/07 14:43:28 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	first = NULL;
	while (lst)
	{
		new = ft_lstnew(NULL);
		if (!new)
		{
			ft_lstclear(&first, del);
			{
				return (NULL);
			}
		}
		new->content = f(lst->content);
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
/*void *ff(void *s)
  {
  return ("mehdi");
  }
  void ft_free(void *ds)
  {
  free(ds);
  }
#include <stdio.h>

int main()
{
char *str = "ahmed";
t_list *s =ft_lstnew(str);
s->content = malloc(10);
ft_strlcpy(s->content, str, sizeof(str));
printf("nom %s\n", s->content);
t_list *s2 =ft_lstnew(str);
s2->content = malloc(10);
ft_strlcpy(s2->content, str, sizeof(str));
printf("name : %s\n", s2->content);
s->next = s2;
s2->next = NULL;
t_list *new = ft_lstmap(s, ff, ft_free);
while(new)
{
printf ("%s  ", new->content);
new = new->next;
}
return 0;
}*/
