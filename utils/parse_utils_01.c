/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils_01.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 12:07:24 by gloras-t          #+#    #+#             */
/*   Updated: 2019/05/03 05:53:52 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

const char	*ft_parse_digit(const char *fmt, int *number)
{
	*number = 0;
	while (ft_isdigit(*fmt))
	{
		*number = *number * 10;
		*number += (*fmt - '0');
		fmt++;
	}
	return (fmt);
}

const char	*ft_dot_treat(const char *fmt, t_format *data, int *context)
{
	if (*fmt == '.')
	{
		data->dot = 1;
		fmt++;
		if (ft_isdigit(*fmt) || (*fmt == '*'))
			*context = (*context == 0) ? 1 : *context;
		else
			data->precision = 0;
	}
	return (fmt);
}

const char	*ft_digit_treat(const char *fmt, t_format *data, int *context,
va_list ap)
{
	int	number;

	if (ft_isdigit(*fmt))
	{
		fmt = ft_parse_digit(fmt, &number);
		if (*fmt == '$')
		{
			data->arg_index += (number - 1);
			ft_parse_format(data, ap);
			fmt++;
		}
		else
			ft_set_value_by_context(data, *context, &number);
	}
	return (fmt);
}

void		ft_asterisk_helper(int *tmp, t_format *data, int *context,
va_list ap)
{
	*tmp = ft_get_int(data->arg_index, data, ap);
	ft_set_value_by_context(data, *context, tmp);
}

const char	*ft_asterisk_treat(const char *fmt, t_format *data,
int *context, va_list ap)
{
	int tmp;

	if (*fmt == '*')
	{
		fmt++;
		ft_asterisk_helper(&tmp, data, context, ap);
		if (ft_isdigit(*fmt))
		{
			fmt = ft_parse_digit(fmt, &tmp);
			if (*fmt == '$')
			{
				ft_asterisk_helper(&tmp, data, context, ap);
				fmt++;
			}
			else
			{
				ft_set_value_by_context(data, *context, &tmp);
				data->arg_index += 1;
			}
		}
		else
			data->arg_index += 1;
	}
	return (fmt);
}
