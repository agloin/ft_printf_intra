/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:20:16 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/07 00:56:02 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function converts the initial portion of the string pointed
** to by nptr to int.
**
** Функция конвертирует начальную часть строки,
** на которую указывает nptr, в целое число.
*/

int				ft_atoi(const char *str)
{
	size_t					i;
	unsigned long long		n;
	int						neg;

	i = 0;
	n = 0;
	neg = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (n > 0x7FFFFFFFFFFFFFFF)
		return (neg > 0 ? -1 : 0);
	else
		return ((int)n * neg);
}
