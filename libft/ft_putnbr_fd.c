/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:13:15 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/14 06:06:14 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function prints given number of type int
** from file descriptor to file descriptor.
**
** Функция выводит данное из файлового описателя число типа int
** в файловый описатель.
*/

void			ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n <= 9)
		return (ft_putchar_fd(n + '0', fd));
	else if (n == INT_MIN)
	{
		ft_putstr_fd("-2", fd);
		ft_putnbr_fd(0x8CA6C00, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
	return ;
}
