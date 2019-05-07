/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 20:54:16 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 13:43:18 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int length;

	length = ft_strlen(s);
	s = (s + length - 1);
	if (c == '\0')
		return ((char*)(s + 1));
	while (length >= 0)
	{
		if (*s == c)
			return ((char*)s);
		s--;
		length--;
	}
	return (NULL);
}
