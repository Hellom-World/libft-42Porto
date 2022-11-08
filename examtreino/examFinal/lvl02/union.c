/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:59:09 by heolivei          #+#    #+#             */
/*   Updated: 2022/08/04 20:27:40 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	if(ac == 3)
	{
		write(1, &av[1][i], 1);
		while (av[1][i++] != '\0')
		{
			while (j < i && av[1][j] != '\0')
			{
				if (av[1][i] == av[1][j])
					flag = 1;
				j++;
			}
			if (flag == 1)
				i++;
			else
				write(1, &av[1][i], 1);
			j = 0;
			flag = 0;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			while (av[1][j] != '\0')
			{
				if (av[1][j] == av[2][i])
					flag = 1;
				j++;
			}
			if (flag == 1)
				i++;
			else
				write (1, &av[2][i], 1);
			i++;
			flag = 0;
		}
	}
	write(1, "\n", 1);
	return (0);
}
