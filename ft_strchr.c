/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:59:16 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/15 15:36:10 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		index;
	char	*ptr;

	index = 0;
	ptr = (char *)str;
	while (ptr[index] != '\0')
	{
		if (ptr[index] == c)
		{
			return (&ptr[index]);
		}
		index++;
	}
	return (NULL);
}

/* int main()
{
	char test[] = "Hello, world";
	
	printf("%s\n", ft_strchr(test, 'o'));
	printf("%s\n", strchr(test, 'o'));
	return(0);
} */