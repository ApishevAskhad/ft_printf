/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:49:52 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 20:38:18 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*a;
	unsigned char	*b;

	if (!s1 || !s2)
		return (1);
	if (!s1 && !s2)
		return (0);
	a = (unsigned char*)s1;
	b = (unsigned char*)s2;
	while (*a)
	{
		if (*a != *b)
			break ;
		a++;
		b++;
	}
	return (*a - *b);
}
