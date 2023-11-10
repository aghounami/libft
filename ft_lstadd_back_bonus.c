/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:34:31 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/05 23:16:46 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (*lst)
	{
		last->next = new;
	}
	else
		*lst = new;
}
/*#include <stdio.h>

  int main()
  {

  char *str = "sgdgd";
  char *fg = "ahmed";
  t_list *list =ft_lstnew(str);
  t_list *t = ft_lstnew(fg);
  ft_lstadd_back(&list, t);
  t_list *current = list;

  printf("%s", (char *)current->content);
  free(list);
  free(t);
  return 0;
  }*/
