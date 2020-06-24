/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 01:02:48 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/07 00:54:25 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function compares the first n bytes of the memory areas s1 and s2.
** It returns an integer less than, equal to,
** or greater than zero if s1 is found, respectively, to be less than,
** to match, or be greater than s2.
**
** Функция сравнивает первые n байтов областей памяти s1 и s2.
** Возвращается целое число, меньшее, большее нуля или равное ему,
** если определено, что s1 меньше, больше, чем s2, или равно ему.
*/

int				ft_memcmp(const void *dest, const void *src, size_t n)
{
	unsigned char	*dest_1;
	unsigned char	*src_1;
	size_t			i;

	i = 0;
	dest_1 = (unsigned char *)dest;
	src_1 = (unsigned char *)src;
	while (i < n)
	{
		if (*dest_1 == *src_1)
		{
			dest_1++;
			src_1++;
		}
		else
			return (*dest_1 - *src_1);
		i++;
	}
	return (0);
}
