/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 21:48:08 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 12:59:54 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		while (*haystack == *needle)
		{
			i++;
			haystack++;
			needle++;
			if (!*needle)
				return ((char*)(haystack - i));
		}
		needle -= i;
		haystack -= (i - 1);
		i = 0;
	}
	return (NULL);
}
