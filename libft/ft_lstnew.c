/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshawn <yshawn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:24:44 by yshawn            #+#    #+#             */
/*   Updated: 2020/03/14 06:33:57 by yshawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” link.
** The variables content and content_size of the new link are initialized
** by copy of the parameters of the function.
** If the parameter content is nul, the variable content is initialized to NULL
** and the variable content_size is initialized to 0 even
** if the parameter content_size isn’t.
** The variable next is initialized to NULL.
** If the allocation fails, the function returns NULL.
**
** Распределяет (с помощью malloc (3)) и возвращает «свежий» лист.
** Переменные content и content_size
** инициализируются копией параметров функции.
** Если content равен NULL, содержимое переменной инициализируется как NULL
** Если content_size не существует, content_size будет равным 0,
** list->next инициализируется в NULL.
** Если распределение завершается неудачно, функция возвращает NULL.
*/

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		if (!(list->content = malloc(content_size)))
		{
			free(list);
			return (NULL);
		}
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	list->next = NULL;
	return (list);
}
