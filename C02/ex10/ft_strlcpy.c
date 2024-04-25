/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:01:17 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/21 18:42:24 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;

	a = 0;
	if (size != 0)
	{
		while (src[a] != '\0')
		{
			if (a < size - 1)
				dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	return (a);
}

/*#include <stdio.h>

int	main(void)
{
	char src[] = "ABC";
	char src2[] = "ABC";
	char src3[] = "ABC";
	char src4[] = "ABC";
	char src5[] = "ABC";
	char dest[] = "";
	char dest2[] = "";
	char dest3[] = "";
	char dest4[] = "";
	char dest5[] = "";
	printf("%i %s \n", ft_strlcpy(dest, src, 0), dest);
	printf("%i %s \n", ft_strlcpy(dest2, src2, 1), dest2);
	printf("%i %s \n", ft_strlcpy(dest3, src3, 2), dest3);
	printf("%i %s \n", ft_strlcpy(dest4, src4, 4), dest4);
	printf("%i %s", ft_strlcpy(dest5, src5, 6), dest5);
}*/
