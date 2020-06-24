/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:31:44 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/06 23:13:24 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function allocates (with malloc()) and returns a “fresh” memory area.
** The memory allocated is initialized to 0.
** If the allocation fails, the function returns NULL.
*/

void			*ft_memalloc(size_t size)
{
	void		*area;

	area = NULL;
	if (size)
	{
		if (!(area = (void *)malloc(size)))
			return (NULL);
	}
	ft_bzero(area, size);
	return (area);
}
