/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 02:47:14 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/06 20:59:38 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strchr() function returns a pointer to the first occurrence
** of the character c in the string s.
**
** Функция strchr() возвращает указатель на местонахождение
** первого совпадения с символом c в строке s.
*/

char			*ft_strchr(const char *s, int c)
{
	char		chr;
	size_t		i;
	size_t		n;

	i = ft_strlen(s);
	n = 0;
	chr = c;
	while (n <= i)
	{
		if (s[n] == chr)
			return ((char *)s + n);
		n++;
	}
	return (NULL);
}
