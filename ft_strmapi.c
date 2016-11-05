/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcollin <alcollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:22:27 by alcollin          #+#    #+#             */
/*   Updated: 2016/05/01 19:53:13 by alcollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = NULL;
	if (s && f)
	{
		ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (ptr)
		{
			while (s[i])
			{
				ptr[i] = f((unsigned int)i, s[i]);
				i++;
			}
			ptr[i] = '\0';
		}
	}
	return (ptr);
}
