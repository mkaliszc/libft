/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 02:24:51 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/19 19:36:00 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	my_bool;

	my_bool = 0;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && !my_bool)
		{
			my_bool = 1;
			count++;
		}
		if (s[i] == c)
		{
			my_bool = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_free_all(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (tab);
}

char	**create_tab(char **tab, char const *charset, char sep)
{
	size_t	i;
	size_t	j;
	size_t	memory;

	i = 0;
	j = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] != sep)
		{
			memory = i;
			while (charset[i] && charset[i] != sep)
				i++;
			tab[j] = ft_substr(charset, memory, i - memory);
			if (!tab[j])
				return (ft_free_all(tab, j));
			j++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	create_tab(tab, s, c);
	return (tab);
}

/* int main()
{
	size_t	i;
	char **tab;

	i = 0;
	tab = ft_split("test1test1test1test", '1');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	ft_free_all(tab, i);
	return(0);
} */