/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:23:28 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/18 20:05:42 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}

/* int main(void)
{
    char *content = strdup("Hello, world!"); 
    t_list *node;

    node = ft_lstnew(content);
    if (node == NULL)
    {
        printf("Error: ft_lstnew returned NULL\n");
        return (1);
    }
    if (strcmp(node->content, content) == 0)
        printf("Content: %s\n", (char *)node->content);
    else
        printf("Error: Content does not match\n");
    if (node->next == NULL)
        printf("Next pointer is NULL, as expected.\n");
    else
        printf("Error: Next pointer is not NULL\n");
    free(content);
    free(node);
    return (0);
} */
