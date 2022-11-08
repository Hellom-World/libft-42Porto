/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:35:30 by heolivei          #+#    #+#             */
/*   Updated: 2022/08/04 15:43:31 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 'm' - (av[1][i] - 'n');
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 'M' - (av[1][i] - 'N');
			write(1, &av[1][i], 1);
			i++;	
		}
	}
	write(1, "\n", 1);
	return (0);
}
