/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slindgre <slindgre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:16:12 by slindgre          #+#    #+#             */
/*   Updated: 2019/05/03 15:14:30 by slindgre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_remove_zeros(char *str)
{
	int	len;

	len = ft_strlen(str);
	while (str[len - 1] == '0')
	{
		str[len - 1] = '\0';
		len--;
	}
}

void	ft_print_128_bits(U128 n)
{
	int i;

	i = 0;
	while (i < 128)
	{
		write(1, (n & ((U128)1 << (127 - i))) ? "1" : "0", 1);
		i++;
		if (!(i % 4))
			write(1, " ", 1);
	}
	write(1, "\n", 1);
}

char	*ft_strrev(char *str, int len)
{
	int		i;
	char	c;

	i = 0;
	while (i < len--)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
	}
	return (str);
}

int		ft_count_digit(ULL n, int base)
{
	int i;

	i = 1;
	while ((n = n / base))
		i++;
	return (i);
}

char	*ft_itoa_base(ULL n, int base)
{
	int		len;
	char	*res;
	int		space;
	int		i;

	len = ft_count_digit(n, base);
	if (base == 2 && len > 8)
		space = (len % 8) ? ((len / 8) + 8 - (len % 8)) : (len / 8) - 1;
	else
		space = 0;
	len = len + space;
	res = ft_strnew(len);
	i = 0;
	while (len--)
	{
		if (i && len > 0 && space && !(i % 8))
		{
			res[len] = ' ';
			len--;
		}
		res[len] = BASE_16[n % base];
		n = n / base;
		i++;
	}
	return (res);
}
