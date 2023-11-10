/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:40:10 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/10 14:26:19 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)b;
	if (len == 0)
	{
		return (b);
	}
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*#include <stdio.h>
int main() 
{
  char str[19];
  ft_memset(str, 'A', 5);
  ft_memset(str + 5, 'b', 4);
  for (size_t i = 0; i < 10; i++) {
  printf("%c ", str[i]);
  }
  return 0;
  }*/
