/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:46:52 by heolivei          #+#    #+#             */
/*   Updated: 2022/08/04 14:02:01 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	b;

	b = 0;
	while (str[b] != '\0')
		b++;
	return (b);
}

int	main(int ac, char **av)
{	
	int	len;

	len = 0;
	if (ac == 2)
	{	
		len = ft_strlen(av[1]);
		while (len > 0)
		{
			write(1, &av[1][len - 1], 1);
			len--;
		}
	}
	write(1, "\n", 1);
}
