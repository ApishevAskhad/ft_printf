/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:57:22 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 13:43:18 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
					str[i] = f(s[i]);
					i++;
				}
			}
		}
		return (str);
	}
	return (NULL);
}
