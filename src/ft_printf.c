/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:31:27 by yshawn            #+#    #+#             */
/*   Updated: 2020/06/28 22:29:10 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	init_spec(t_format *spec)
{
	spec->fd = 1;
	spec->width = 0;
	spec->accur = 0;
	spec->dollar = 0;
	spec->sign = 0;
	spec->base = 0;
	spec->minus = 0;
	spec->plus = 0;
	spec->space = 0;
	spec->zero = 0;
	spec->size = 0;
	spec->type = 0;
}

void	printf_printf(t_format *spec, char *str, int *cnt)
{
	write(spec->fd, str, 1);
	(*cnt)++;
	return ;
}

int		print_b(t_format *spec, char *str, va_list vl, va_list fst_vl)
{
	int		cnt;

	cnt = 0;
	while (*str)
	{
		if (*str == '{')
			str = parse_bcolor(spec, str);
		if (*str != '%')
			printf_printf(spec, str, &cnt);
		else if (*str == '%')
		{
			str = parse_specifiers(spec, ++str, vl);
			if (spec->type)
				cnt = cnt + parse_output(spec, vl, fst_vl);
			else if (*str != '%' && *str)
				printf_printf(spec, str, &cnt);
		}
		if (!*str)
			return (cnt);
		str++;
	}
	return (cnt);
}

int		ft_fprintf(int fd, const char *format, ...)
{
	char		*str;
	va_list		fst_vl;
	va_list		vl;
	int			cnt;
	t_format	spec[1];

	init_spec(spec);
	spec->fd = fd;
	va_start(vl, format);
	va_copy(fst_vl, vl);
	str = (char *)format;
	cnt = print_b(spec, str, vl, fst_vl);
	va_end(vl);
	return (cnt);
}

int		ft_printf(const char *format, ...)
{
	char		*str;
	va_list		fst_vl;
	va_list		vl;
	int			cnt;
	t_format	spec[1];

	init_spec(spec);
	va_start(vl, format);
	va_copy(fst_vl, vl);
	str = (char *)format;
	cnt = print_b(spec, str, vl, fst_vl);
	va_end(vl);
	return (cnt);
}
