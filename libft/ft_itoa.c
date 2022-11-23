/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:03:29 by heolivei          #+#    #+#             */
/*   Updated: 2022/11/23 14:49:29 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;

	while (n != 0)
	{
		n = n / 10;
		l++;
	}
	return (len);
}

char	*ft_itoa(int n)
{	
	char	*str;
	size_t	counter;
	int		i;

	counter = ft_nbrlen(int n);
}
