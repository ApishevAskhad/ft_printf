/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 18:01:30 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 12:59:54 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	while (*haystack && len > 0)
	{
		while (*haystack == *needle && len > 0)
		{
			len--;
			i++;
			haystack++;
			needle++;
			if (!*needle)
				return ((char*)(haystack - i));
		}
		needle -= i;
		haystack -= (i - 1);
		len += (i - 1);
		i = 0;
	}
	return (NULL);
}
