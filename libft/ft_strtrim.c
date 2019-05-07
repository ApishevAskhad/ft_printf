/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 21:05:50 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 13:43:18 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	ft_get_index_from_start(char const *s)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(s);
	while (i < length)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			break ;
		i++;
	}
	return (i);
}

static int	ft_get_index_from_end(char const *s)
{
	int	length;

	length = ft_strlen(s);
	while (length-- >= 0)
	{
		if (s[length] != ' ' && s[length] != '\n' && s[length] != '\t')
			break ;
	}
	return (length + 1);
}

char		*ft_strtrim(char const *s)
{
	size_t			len;
	unsigned int	start;

	if (s)
	{
		start = ft_get_index_from_start(s);
		len = ft_get_index_from_end(s);
		return (ft_strsub(s, start, (start < len) ? len - start : 0));
	}
	return (NULL);
}
