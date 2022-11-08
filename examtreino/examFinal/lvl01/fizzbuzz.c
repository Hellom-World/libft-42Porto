/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:24:36 by heolivei          #+#    #+#             */
/*   Updated: 2022/08/03 12:40:08 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_write_number(int number)
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
	return (0);
}

int main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		if (i % 3 == 0)	
			write(1, "fizz", 4);
		if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_write_number(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
