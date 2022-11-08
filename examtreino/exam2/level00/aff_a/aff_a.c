/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:01:49 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/28 13:50:01 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//exibir primeiro caracter "a" seguido por '\n'
//se nao houver "a" escrever '\n'
//se tiver so o programa como argumento escreva "a"; 
int	main(int ac, char **av)
{
	int	i;
	
	i = 0;
	if (ac == 2)
	{	
		while (av[1][i] != '\0')
		{	
			if (av[1][i] == 'a')
			{
				write(1, "a", 1);
				return (0);
			}
			i++;
		}
		if (av[1][i] == '\0')
		{
			write(1, "\n", 1);
			return (0);
		}
	}
	write(1, "a\n", 2);
	return (0);
}
