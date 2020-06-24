/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:28:43 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/06 23:12:55 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	int				numlen;
	unsigned int	u_n;
	char			*tmp;

	u_n = 0;
	numlen = ft_numlen(n, 10);
	if (!(tmp = (char *)malloc(sizeof(char) * (numlen + 1))))
		return (NULL);
	tmp[numlen] = '\0';
	if (n < 0)
		u_n = n * -1;
	else
		u_n = n;
	while (--numlen >= 0)
	{
		tmp[numlen] = u_n % 10 + '0';
		u_n /= 10;
	}
	if (n < 0)
		tmp[0] = '-';
	return (tmp);
}
