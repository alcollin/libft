/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcollin <alcollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:22:27 by alcollin          #+#    #+#             */
/*   Updated: 2016/06/07 15:32:36 by alcollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*newlist2;
	t_list	*finallist;

	newlist2 = NULL;
	while (lst)
	{
		newlist = f(lst);
		if (!newlist2)
		{
			newlist2 = newlist;
			finallist = newlist2;
			newlist2->next = NULL;
		}
		else
		{
			newlist2->next = newlist;
			newlist->next = NULL;
			newlist2 = newlist2->next;
		}
		lst = lst->next;
	}
	return (finallist);
}
