/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:23:36 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 12:59:54 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	ft_is_over_long(unsigned long nbr, int sign)
{
	if (nbr > 9223372036854775807)
		return ((sign > 0) ? -1 : 0);
	return (sign * nbr);
}

int			ft_atoi(const char *str)
{
	int				i;
	unsigned long	nbr;
	int				sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] < 33)
	{
		if ((str[i] == '\e') || (str[i] == '\200'))
			return (nbr);
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nbr = 10 * nbr + (str[i] - '0');
		i++;
	}
	return (ft_is_over_long(nbr, sign));
}
