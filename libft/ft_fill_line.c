/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 01:00:13 by gloras-t          #+#    #+#             */
/*   Updated: 2019/05/02 01:00:31 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_fill_line(int length, char c)
{
	int		i;
	char	*str;

	str = ft_strnew(length);
	i = 0;
	while (i < length)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
