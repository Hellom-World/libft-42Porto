/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:56:40 by heolivei          #+#    #+#             */
/*   Updated: 2022/08/03 11:12:18 by heolivei         ###   ########.fr       */
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
			if(av[1][i] == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
			else	
				i++;
		}
		if (av[1][i] == '\0')
                        {
                                write(1, "\n", 1);
				return (0);
                        }
	}
	if (ac == 1)
		write(1, "a\n", 2);
	return (0);
}
