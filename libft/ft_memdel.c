/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:32:56 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/06 21:07:39 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function takes as a parameter the address of a memory area that needs
** to be freed with free(), then puts the pointer to NULL.
**
** Функция принимает в качестве параметра адрес области памяти, которая должна
** быть освобождена с помощью free(), указателю присваевается NULL.
*/

void			ft_memdel(void **ap)
{
	if (!ap)
		return ;
	else if (!*ap)
		return ;
	else
	{
		free(*ap);
		*ap = NULL;
	}
	return ;
}
