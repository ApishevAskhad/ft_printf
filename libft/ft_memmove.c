/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:53:37 by gloras-t          #+#    #+#             */
/*   Updated: 2019/04/01 12:59:54 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;

	if (dst == src)
		return (dst);
	s1 = (char*)dst;
	s2 = (char*)src;
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	while (len-- > 0)
		s1[len] = s2[len];
	return (dst);
}
