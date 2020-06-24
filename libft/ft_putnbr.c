/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:13:02 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/14 06:33:43 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function prints given number of type int.
**
** Функция выводит данное число типа int.
*/

void			ft_putnbr(int n)
{
	if (n >= 0 && n <= 9)
		return (ft_putchar(n + '0'));
	else if (n == INT_MIN)
	{
		ft_putstr("-2");
		ft_putnbr(0x8CA6C00);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
	return ;
}
