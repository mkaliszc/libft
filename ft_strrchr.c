/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:19:12 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/15 17:21:23 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		index;
	char	*ptr;
	char	*return_value;

	index = 0;
	ptr = (char *)str;
	while (ptr[index] != '\0')
	{
		if (ptr[index] == c)
			return_value = &ptr[index];
		index++;
	}
	if (return_value)
		return (return_value);
	else
		return (NULL);
}

/* int main()
{
	char test[] = "Hello, world";
	
	printf("%s\n", ft_strrchr(test, 'o'));
	printf("%s\n", strrchr(test, 'o'));
	return(0);
} */