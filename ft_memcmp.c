/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:42:28 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/02 15:46:03 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (i < n && a[i] == b[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (a[i] - b[i]);
}
/*#include <stdio.h>
  int main()
  {
  char s1[] = "aey";
  char s2[] = "ahy";
  int res = ft_memcmp(s1 , s2, 4);
  printf("%d", res);
  }*/
