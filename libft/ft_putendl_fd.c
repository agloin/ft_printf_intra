/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:12:29 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/07 00:53:42 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function writes the string s from file descriptor to file descriptor,
** without its terminating null byte ('\0'), ending by new line ('\n')
**
** Функция выводит строку s без из файлового описателя в файловый описатель,
** без завершающего символа ('\0'), заканчивающуюся переносом строки ('\n')
*/

void			ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return ;
}
