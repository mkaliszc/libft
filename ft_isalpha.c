/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:09:21 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/03 09:09:21 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
		return (1);
	return (0);
}

/* int main()
{
	char c;

	c = 'c';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	return(0);
} */