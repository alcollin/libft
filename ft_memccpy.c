/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcollin <alcollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:22:27 by alcollin          #+#    #+#             */
/*   Updated: 2016/05/17 15:17:14 by alcollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*destptr;
	const char	*srcptr;

	destptr = (char *)dest;
	srcptr = (char *)src;
	while (n > 0 && *srcptr != c)
	{
		n--;
		*destptr++ = *srcptr++;
	}
	if (n > 0)
	{
		*destptr++ = *srcptr++;
		return ((void *)destptr);
	}
	else
		return (NULL);
}
