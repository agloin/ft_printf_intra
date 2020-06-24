/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:48:14 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/06 21:08:40 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a string that need to be
** freed with free(), then sets its pointer to NULL.
**
** Функция ft_strdel() принимает в качестве параметра адрес строки,
** которая должна быть освобождена с помощью free (3),
** затем устанавливает указатель на NULL.
*/

void			ft_strdel(char **str)
{
	if (!str)
		return ;
	else if (!*str)
		return ;
	else
	{
		free(*str);
		*str = NULL;
	}
	return ;
}
