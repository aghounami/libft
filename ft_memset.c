/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:40:10 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/15 17:54:13 by aghounam         ###   ########.fr       */
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
