/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chech_in_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 12:15:19 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/25 12:15:41 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_check_in_line(char c, char *line)
{
	if (line)
	{
		while (*line)
		{
			if (*line == c)
				return (1);
			line++;
		}
	}
	return (0);
}
