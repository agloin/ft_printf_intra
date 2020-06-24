/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 23:51:21 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/07 00:53:24 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function takes an unsigned number, and the number system
** and returns its length, necessary for writing this number to a string
**
** Функция принимает беззнаковое число, а также систему счисления
** и возвращает его длину, нужную для записи этого числа в строку
*/

int				ft_numlen(long long value, int base)
{
	int			i;
	int			neg;

	if (base < 2 || base > 16 || base % 2 != 0)
		return (0);
	i = 0;
	neg = 0;
	if (value == 0)
		return (1);
	if (value < 0)
		neg = 1;
	while (value)
	{
		value /= base;
		i++;
	}
	return (i + neg);
}
