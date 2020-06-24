/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:53:30 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/06 21:10:31 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strdup() function returns a pointer to a new string which is a duplicate
** of the string s. Memory for the new string is obtained with malloc(3),
** and can be freed with free(3).
**
** Функция strdup() возвращает указатель на новую строку,
** являющуюся дубликатом строки s.
** Память под новую строку выделятся с помощью malloc(3)
** и может быть высвобождены с помощью free(3).
*/

char			*ft_strdup(const char *s)
{
	size_t		i;
	size_t		strlen;
	char		*tmp;

	i = 0;
	strlen = ft_strlen(s);
	tmp = NULL;
	tmp = (char *)malloc(sizeof(char) * (strlen + 1));
	if (tmp == NULL)
		return (NULL);
	while (i < strlen)
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
