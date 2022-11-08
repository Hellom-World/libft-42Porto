/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:46:16 by heolivei          #+#    #+#             */
/*   Updated: 2022/08/04 13:00:30 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{	
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (ac == 2)
	{	
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				count = av[1][i] - '`';
			}
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                        {
                                count = av[1][i] - '@';
                        }
			while (count > 0)
			{
				write(1, &av[1][i], 1);
				count--;
			}
			i++;
			count = 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
