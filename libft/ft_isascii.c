/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:07:03 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/07 00:54:46 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function checks whether c is a 7-bit unsigned char value
** that fits into the ASCII character set.
**
** Функция проверяет, является ли c 7-битным unsigned char,
** значение которого попадает в таблицу символов ASCII.
*/

int				ft_isascii(int c)
{
	return (c >= 0 && c <= 127 ? 1 : 0);
}
