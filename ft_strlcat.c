/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:42:17 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/15 01:03:22 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dest);
	if (n <= j)
		return (ft_strlen(src) + j);
	i = 0;
	while (i + j < n - 1 && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(src) + j);
}

/* int main()
{
	char dest[10] = "Hello";
	char test[] = ", World!";
	
	size_t i = ft_strlcat(dest, test, 10);
	printf("char : %s and int : %ld", dest ,i);
	return(0);
} */