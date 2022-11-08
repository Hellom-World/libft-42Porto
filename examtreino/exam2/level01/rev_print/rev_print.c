/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:33:42 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/29 12:31:13 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while(str[l] != '\0')
	{
		l++;
	}
	return (l);
}

int	main(int ac, char **av)
{
	int	i;
	
	i = 0;
	if (ac == 2)
	{	
		i = (ft_strlen(av[1]) - 1);
		while (i >= 0)
		{
			write(1, &av[1][i], 1);
			i--;
		}
		return (0);
	}
	
	write(1, "\n", 1);
	return (0);
}
