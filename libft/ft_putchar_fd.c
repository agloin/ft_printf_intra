/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:11:01 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/06 20:46:32 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function output of character from file descriptor to file descriptor
*/

void			ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
