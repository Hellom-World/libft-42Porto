/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:41:24 by heolivei          #+#    #+#             */
/*   Updated: 2022/11/08 10:05:56 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{	
	/* O tipo de variavel size_t eh uma variavel sem sinal de inteiro
	 * ou seja, soh assume numeros positivos*/
	size_t	i;
	//segundo comentario pc pessoal	

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i]; //Porque usou unsigned char?
		i++;
	}
	return (dst);
}

	int main () {
	   const char src[50] = "http://www.tutorialspoint.com";
	   char dest[50];
	  
	   strcpy(dest,"Hellom");
	   printf("Before memcpy dest = %s\n", dest);
	   memcpy(dest, src, strlen(src)+1);
	   printf("After memcpy dest = %s\n", dest);
	   
	   printf("%lu\n", strlen(src));
	

	   const char src2[50] = "http://www.tutorialspoint.com";
	   char dest2[50];
	   
	   strcpy(dest2,"Hellom");
	   printf("Before ft_memcpy dest = %s\n", dest2);
	   memcpy(dest2, src2, strlen(src2)+1);
	   printf("After ft_memcpy dest = %s\n", dest2);
	   
	   printf("%lu\n", strlen(src2));

	   return(0);
	}
