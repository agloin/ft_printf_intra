/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:08:49 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/06 19:35:21 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function copies n bytes from memory area src
** to memory area dest. The memory areas must not overlap.
**
** Функция копирует n байтов из области памяти src
** в область памяти dest. Области памяти не могут пересекаться.
*/

void			*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dest_1;
	const unsigned char	*src_1;

	dest_1 = (unsigned char *)dest;
	src_1 = (unsigned char *)src;
	if (n != 0)
		while (n--)
		{
			*dest_1 = *src_1;
			if (*src_1 == (unsigned char)c)
				return (dest_1 + 1);
			dest_1++;
			src_1++;
		}
	return (NULL);
}
