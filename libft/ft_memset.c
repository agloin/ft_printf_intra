/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:51:38 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/07 00:54:10 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memset() function fills the first n bytes of the memory area
** pointed to by s with the constant byte c.
**
** Функция заполняет первые n байтов той области памяти,
** на которую указывает s, постоянным байтом c.
*/

void			*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (b);
}
