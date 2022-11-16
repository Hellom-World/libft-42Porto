/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:08:05 by heolivei          #+#    #+#             */
/*   Updated: 2022/11/16 15:04:21 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ucs1;
	unsigned char	*ucs2;

	ucs1 = unsigned char *s1;
	ucs2 = unsigned char *s2;
	i = 0;
	while (ucs1[i] == ucs2[i])
	{
		if (ucs1[i] && ucs2[i] == '\0')
			return (0);
		i++;
	}
	return ((void *)(ucs1 + i) - (void *)(ucs2 + i));
}
