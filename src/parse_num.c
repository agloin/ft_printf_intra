/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 19:56:50 by yshawn            #+#    #+#             */
/*   Updated: 2020/06/28 22:16:46 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		parse_num(t_format *spec, uint64_t ival, int len)
{
	int		strlen;
	char	*str;

	strlen = spec->width + spec->space + spec->plus + spec->sign +
			spec->sharp + len;
	if (spec->accur > 0)
		strlen = strlen + spec->accur;
	if (!(str = (char *)malloc(sizeof(char) * (strlen + 1))))
		return (0);
	str[strlen] = '\0';
	if (spec->minus == 0)
		record_num(spec, str, ival, len);
	if (spec->minus == 1)
		record_minus_num(spec, str, ival, len);
	write(spec->fd, str, strlen);
	free(str);
	return (strlen);
}
