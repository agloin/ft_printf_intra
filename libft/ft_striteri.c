/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 23:10:30 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/14 05:46:52 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_striteri() function applies the function f to each character
** of the string passed as argument, and passing its index as first argument.
** Each character is passed by address to f to be modified if necessary.
**
** Функция ft_striteri() применяет функцию f к каждому символу
** передаваемой строки в качестве аргумента и передачи его индекса
** в качестве первого аргумента.
** Каждый символ передается по адресу f для изменения в случае необходимости.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s)
	{
		(*f)(i, s);
		s++;
		i++;
	}
	return ;
}
