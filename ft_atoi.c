/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcollin <alcollin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:22:27 by alcollin          #+#    #+#             */
/*   Updated: 2016/05/02 09:48:46 by alcollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_verif(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int			ft_atoi(const char *nptr)
{
	int	nb;
	int	neg;

	neg = 1;
	while (ft_verif(*nptr) == 1)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			neg = -1;
		nptr++;
	}
	nb = 0;
	while (ft_isdigit((int)*nptr))
	{
		nb = nb * 10 + *nptr - '0';
		nptr++;
	}
	return (nb * neg);
}
