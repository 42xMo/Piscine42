/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:06:42 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/19 19:23:44 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[] = "ABC";
	char	src[] = "DEFG";
	char	dest2[] = "ABC";
	char	src2[] = "DEFG";

	printf("%s", ft_strcpy(dest, src));
	printf("\n");
	printf("%s", strcpy(dest2, src2));
}*/
