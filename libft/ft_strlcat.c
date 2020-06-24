/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 22:07:27 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/07 00:51:38 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strlcat () function appends the NUL-terminated string src
** to the end of dest.
** It will append at most size - strlen(dest) - 1 bytes,
** NUL-terminating the result.
*/

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		n;

	i = ft_strlen(dest);
	n = ft_strlen(src);
	if (i > size)
		i = size;
	if (i == size)
		return (size + n);
	if (n < size - i)
		ft_memcpy(dest + i, src, n + 1);
	else
	{
		ft_memcpy(dest + i, src, size - i - 1);
		dest[size - 1] = '\0';
	}
	return (i + n);
}
