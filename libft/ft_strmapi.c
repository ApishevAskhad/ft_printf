/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:56:24 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 13:43:18 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		length;

	if (s)
	{
		i = 0;
		length = ft_strlen(s);
		str = ft_strnew(length);
		if (str)
		{
			if (f)
			{
				while (i < length)
				{
					str[i] = f(i, s[i]);
					i++;
				}
			}
		}
		return (str);
	}
	return (NULL);
}
