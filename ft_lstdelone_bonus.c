/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:36 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/09 22:50:14 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del && lst)
	{
		(del)(lst->content);
		free (lst);
	}
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
printf("%s", s->content);
ft_lstdelone(s, ft_free);
printf("%s", s->content);
return 0;
}*/
