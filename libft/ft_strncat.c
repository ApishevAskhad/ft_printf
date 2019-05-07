/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:40:31 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 13:43:18 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(s1);
	s1 = (s1 + length);
	while (s2[i] && i < n)
	{
		*s1 = s2[i];
		i++;
		s1++;
	}
	*s1 = '\0';
	return (s1 - length - i);
}
