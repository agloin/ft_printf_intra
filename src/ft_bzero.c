/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 22:49:04 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/07 00:54:43 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function  erases the data in the n bytes of the memory
** starting at the location pointed to by s, by writing zeros
** (bytes containing '\0') to that area.
**
** Функция устанавливает первые n байтов области,
** начинающейся с s в нули (пустые байты).
*/

void			ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = -1;
	temp = (unsigned char *)s;
	while (++i < n)
		temp[i] = '\0';
	return ;
}
