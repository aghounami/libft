/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:59:06 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/04 19:19:08 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	char str[] = "hello world";
	char *res = ft_memchr(str, 2 + 256, 3); 
	printf("%s", res);
}*/
