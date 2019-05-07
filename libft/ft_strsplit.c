/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:46:31 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 12:59:54 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	ft_words_count(char const *s, char c)
{
	int	i;
	int	counter;

	if (s)
	{
		i = 0;
		counter = 0;
		while (s[i])
		{
			if (s[i] != c)
			{
				counter++;
				while ((s[i + 1] != c) && s[i + 1])
					i++;
			}
			i++;
		}
		return (counter);
	}
	return (-1);
}

static char	*ft(const char *s, char c)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			if (s[i] != c)
				return ((char*)(s + i));
			i++;
		}
	}
	return (NULL);
}

static int	ft_length(const char *s, char c)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i] != c)
			i++;
		return (i);
	}
	return (-1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		i;
	int		words_count;
	char	*str;

	if (s)
	{
		words_count = ft_words_count(s, c);
		array = (char**)malloc(sizeof(char*) * words_count + 1);
		if (array)
		{
			i = 0;
			str = (char*)s;
			while (i < words_count)
			{
				str = ft(str, c);
				array[i] = ft_strsub(str, 0, ft_length(str, c));
				str = (str + ft_length(str, c));
				i++;
			}
			array[i] = NULL;
		}
		return (array);
	}
	return (NULL);
}
