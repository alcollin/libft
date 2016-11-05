/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcollin <alcollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:22:27 by alcollin          #+#    #+#             */
/*   Updated: 2016/11/05 12:27:55 by alcollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*s2;

	s2 = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s2)
	{
		ft_strcpy(s2, s);
		return (s2);
	}
	return (NULL);
}
