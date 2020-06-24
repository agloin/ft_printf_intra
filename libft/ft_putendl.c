/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:12:02 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/07 00:53:47 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function writes the string s, without its terminating null byte ('\0'),
** ending by new line ('\n').
**
** Функция выводит строку s без завершающего символа ('\0'),
** заканчивающуюся переносом строки ('\n').
*/

void			ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
	return ;
}
