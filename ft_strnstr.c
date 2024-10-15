/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:02:45 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/15 21:52:26 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*cast;

	i = 0;
	cast = (char *)big;
	if (little == NULL)
		return (cast);
	while (i < len)
	{
		j = 0;
		while (cast[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return (&cast[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* int	main()
{
	char	big[] = "heo telost";
	char	*little;
	
	little = NULL;
	printf("%s\n", ft_strnstr(big, little, 11));
	return(0); 
} */