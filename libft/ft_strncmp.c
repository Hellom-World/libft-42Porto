/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:20:23 by heolivei          #+#    #+#             */
/*   Updated: 2022/11/08 17:44:37 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	cmp_char(char c1, char c2)
{
	if ((char)c1 != (char)c2)
		return ((char)c1 - (char)c2);
	return (0);
}

int
	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (cmp_char(s1[i], s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (cmp_char(s1[i], s2[i]));
	return (0);
}

#include <stdio.h>
//#include <string.h>

int main()
{
    // Take any two strings
    char str1[10] = "AKASH";
    char str2[10] = "akash";

    // Compare strings using strncmp()
    int result = ft_strncmp(str1, str2, 4);

    if (result == 0) {
        // num is the 3rd parameter of strncmp() function
        printf("str1 is equal to str2 upto num characters\n");
    }
    else if (result > 0)
        printf("str1 is greater than str2\n");
    else
        printf("str2 is greater than str1\n");

    printf("Value returned by strncmp() is: %d", result);

    return 0;
}

/*Output:

str1 is greater than str2
Value returned by strncmp() is: 18 */

