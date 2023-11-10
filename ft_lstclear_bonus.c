/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:52:50 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/05 22:35:22 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*head;

	if (!lst || !del)
	{
		return ;
	}
	head = *lst;
	while (head)
	{
		tmp = head->next;
		(del)(head->content);
		free(head);
		head = tmp;
	}
	*lst = NULL;
}
/*void ft_free(void *ds)
  {
  free(ds);
  }
#include <stdio.h>

int main()
{
char *str = "sgdgd";
t_list *s =ft_lstnew(str);
s->content = malloc(10);
ft_strlcpy(s->content, str, sizeof(str));
printf("sefesfws: %s\n", s->content);
t_list *s2 =ft_lstnew(str);
s2->content = malloc(10);
ft_strlcpy(s2->content, str, sizeof(str));
printf("dfdddd : %s\n", s2->content);
s->next = s2;
ft_lstclear(&s, ft_free);
if(s == NULL)  
printf("null");
return 0;
}*/
