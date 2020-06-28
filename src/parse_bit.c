/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_bit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 23:55:23 by yshawn            #+#    #+#             */
/*   Updated: 2020/06/28 22:16:19 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		parse_bit(t_format *spec, va_list vl)
{
	char		*str;
	uint64_t	unval;
	int			strlen;

	unval = va_arg(vl, uint64_t);
	str = NULL;
	strlen = 8;
	if (unval > 0xFF && unval <= 0xFFFF)
		strlen = 16;
	else if (unval > 0xFFFF)
		strlen = 32;
	if (spec->width - strlen > 0)
		spec->width = spec->width - strlen;
	else
		spec->width = 0;
	strlen = strlen + spec->width;
	str = record_bit(spec, str, strlen, unval);
	if (str)
	{
		write(spec->fd, str, strlen);
		free(str);
	}
	return (strlen);
}
