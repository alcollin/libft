/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcollin <alcollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:22:27 by alcollin          #+#    #+#             */
/*   Updated: 2016/06/07 13:55:24 by alcollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*newlist;

	newlist = (t_list *)malloc(sizeof(t_list));
	if (newlist)
	{
		if (!content)
		{
			newlist->content = NULL;
			newlist->content_size = 0;
		}
		else
		{
			newlist->content = malloc(sizeof(content));
			if (newlist->content == NULL)
				return (NULL);
			ft_memcpy(newlist->content, content, content_size);
			newlist->content_size = content_size;
		}
		newlist->next = NULL;
		return (newlist);
	}
	return (NULL);
}
