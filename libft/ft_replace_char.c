/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:40:27 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/25 12:55:59 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_replace_char(char *str, char a, char b)
{
	int	index;

	index = ft_strchrind(str, a);
	str[index] = b;
}
