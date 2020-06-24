/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 00:17:18 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/06 21:02:40 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strcmp() function compares the two strings s1 and s2.
** It returns an integer less than, equal to,
** or greater than zero if s1 is found, respectively, to be less than,
** to match, or be greater than s2.
**
** Функция strcmp() сравнивает две строки: s1 и s2. Она возвращает целое число,
** которое меньше, больше нуля или равно ему, если s1 соответственно меньше,
** больше или равно s2.
*/

int				ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *dest_1;
	unsigned char *src_1;

	dest_1 = (unsigned char *)s1;
	src_1 = (unsigned char *)s2;
	while (*dest_1 != '\0' && *src_1 != '\0')
	{
		if (*dest_1 != *src_1)
			return (*dest_1 - *src_1);
		dest_1++;
		src_1++;
	}
	return (*dest_1 - *src_1);
}
