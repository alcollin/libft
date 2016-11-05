/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcollin <alcollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:22:27 by alcollin          #+#    #+#             */
/*   Updated: 2016/05/17 12:46:12 by alcollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	str = ft_memalloc(1);
	if (s && len)
	{
		str = ft_strnew(len);
		if (str)
		{
			i = 0;
			while (len--)
				str[i++] = s[start++];
			str[i] = '\0';
		}
	}
	return (str);
}
