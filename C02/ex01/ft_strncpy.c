/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:34:34 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/24 19:52:01 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    dest[] = "ABCDEFGHIJK";
        char    src[] = "LMNO";
        char    dest2[] = "ABCDEFGHIJK";
        char    src2[] = "LMNO";

        printf("%s", ft_strncpy(dest, src, 2));
        printf("\n");
        printf("%s", strncpy(dest2, src2, 2));
	printf("\n");
	printf("%s", ft_strncpy(dest, src, 4));
        printf("\n");
        printf("%s", strncpy(dest2, src2, 4));
        printf("\n");
	printf("%s", ft_strncpy(dest, src, 6));
        printf("\n");
        printf("%s", strncpy(dest2, src2, 6));
}*/
