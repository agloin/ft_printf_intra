/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:48:27 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/06 21:16:48 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_striter() applies the function f to each character
** of the string passed as argument.
** Each character is passed by address to f to be modified if necessary.
**
** Функция ft_striter() применяет функцию f к каждому символу
** передаваемой строки в качестве аргумента.
** Каждый символ передается по адресу f, чтобы изменить при необходимости.
*/

void			ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return ;
	while (*s)
	{
		(*f)(s);
		s++;
	}
	return ;
}
