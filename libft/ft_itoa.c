/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 22:07:33 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 12:59:54 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	ft_length(int n)
{
	long long	i;
	int			length;

	i = (n < 0) ? -1 : 1;
	length = (n <= 0) ? 1 : 0;
	if (n > 0)
	{
		while (i <= n)
		{
			i *= 10;
			length++;
		}
	}
	else if (n < 0)
	{
		while (i >= n)
		{
			i *= 10;
			length++;
		}
	}
	return (length);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		sign;
	int		length;

	length = ft_length(n);
	sign = (n < 0) ? -1 : 1;
	str = (char*)malloc(sizeof(char) * length + 1);
	if (str)
	{
		i = 0;
		length++;
		str[length-- - 1] = '\0';
		while (length-- > 0)
		{
			str[length] = (n % 10 * sign) + '0';
			n /= 10;
		}
		if (sign < 0)
			str[0] = (str[0] == '0') ? '-' : str[0];
		return (str);
	}
	return (NULL);
}
