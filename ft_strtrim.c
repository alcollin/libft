/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcollin <alcollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:22:27 by alcollin          #+#    #+#             */
/*   Updated: 2016/05/01 21:30:46 by alcollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = 0;
	k = 0;
	while (s[k])
	{
		if (s[k] != ' ' && s[k] != '\n' && s[k] != '\t')
		{
			k++;
			j = k;
		}
		else
			k++;
	}
	if (j == 0)
		return (ft_strdup(""));
	return (ft_strsub(s, i, j - i));
}
