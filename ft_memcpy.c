/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:24:11 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/14 23:51:06 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*cast;

	i = 0;
	cast = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = cast[i];
		i++;
	}
	return (dest);
}

/* int main()
{
	char	test[11];
    ft_memcpy(test, "abcdefghijkl", 10);
    test[11] = '\0';
    printf("%s", test);
} */