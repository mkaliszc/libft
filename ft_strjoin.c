/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:56:28 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/16 15:01:42 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*return_chain;

	return_chain = malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2)));
	if (return_chain == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		return_chain[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		return_chain[i + j] = s2[j];
		j++;
	}
	return_chain[i + j] = '\0';
	return (return_chain);	
}

/* int	main()
{
	const char test[] = "Hello";
	const char s2[]= ", World!";
	char *ptr;

	ptr = ft_strjoin(test, s2);
	printf("%s\n", ptr);
	return(0);
} */