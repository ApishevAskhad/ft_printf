/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 21:49:54 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/25 12:54:47 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;

	if (lst && f)
	{
		result = f(lst);
		lst = lst->next;
		while (lst)
		{
			ft_lstadd_end(&result, f(lst));
			lst = lst->next;
		}
		return (result);
	}
	return (NULL);
}
