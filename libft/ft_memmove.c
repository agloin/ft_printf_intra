/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 23:00:39 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/07 00:53:59 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function copies n bytes from memory area src
** to memory area dest. The memory areas may overlap:
** copying takes place as though the bytes in src are first copied
** into a temporary array that does not overlap src or dest,
** and the bytes are then copied from the temporary array to dest.
**
** Функция копирует n байтов из области памяти src в облать памяти dest.
** Области памяти могут перекрываться.
*/

void			*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dest_1;
	unsigned char	*src_1;
	unsigned char	*last_dest_1;
	unsigned char	*last_src_1;

	dest_1 = (unsigned char *)dest;
	src_1 = (unsigned char *)src;
	if (dest_1 == NULL && src_1 == NULL)
		return (NULL);
	last_dest_1 = dest_1 + (len - 1);
	last_src_1 = src_1 + (len - 1);
	if (dest_1 < src_1)
	{
		while (len--)
			*dest_1++ = *src_1++;
	}
	else
	{
		while (len--)
		{
			*last_dest_1-- = *last_src_1--;
		}
	}
	return (dest);
}
