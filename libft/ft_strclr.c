/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:52:40 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/06 20:59:14 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strclr() sets every character of the string to the value ’\0’.
**
** Функция ft_strclr() устанавливает для каждого символа строки значение ’\0’.
*/

void			ft_strclr(char *s)
{
	if (s != 0)
		ft_bzero(s, ft_strlen(s));
	return ;
}
