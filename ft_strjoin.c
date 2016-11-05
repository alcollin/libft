/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcollin <alcollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:22:27 by alcollin          #+#    #+#             */
/*   Updated: 2016/05/17 16:02:51 by alcollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		len;

	str = NULL;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		str = (char*)malloc(sizeof(char) * (len + 1));
		if (str)
		{
			i = 0;
			while (*s1 != '\0')
				str[i++] = *s1++;
			while (*s2 != '\0')
				str[i++] = *s2++;
			str[i] = '\0';
		}
	}
	else if (s1)
		return (ft_strdup(s1));
	else if (s2)
		return (ft_strdup(s2));
	return (str);
}
