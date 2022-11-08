/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:46:28 by heolivei          #+#    #+#             */
/*   Updated: 2022/08/04 17:03:53 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sinal;
	
	i = 0;
	res = 0;
	sinal = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r')
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sinal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + ( str[i] - '0') ;
		i++;
	}
	return (res * sinal);
}

int	main(void)
{
	char	s1[] = "  +-123as123";
	char    s2[] = "  +-123as123";

	printf("%d\n",ft_atoi(s1));
	printf("%d",atoi(s2));
}
