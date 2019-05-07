/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 19:13:14 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 12:59:54 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element)
	{
		if (content)
		{
			if ((element->content = malloc(content_size)) == NULL)
			{
				free(element);
				return (NULL);
			}
			ft_memcpy(element->content, content, content_size);
			element->content_size = content_size;
		}
		else
		{
			element->content = NULL;
			element->content_size = 0;
		}
		element->next = NULL;
		return (element);
	}
	return (NULL);
}
