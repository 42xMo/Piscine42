/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:57:28 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/21 21:11:28 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    dest[23]= "Salut, Com";
        char    src[] = "ment tu vas ?";
        char    dest1[23] = "Salut, Com";
        char    src1[] = "ment tu vas ?";

        printf("%s \n", strncat(dest, src, 4));
        printf("%s \n", ft_strncat(dest1, src1, 4));
}*/
