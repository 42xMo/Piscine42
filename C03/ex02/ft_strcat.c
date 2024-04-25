/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:21:10 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/21 20:56:07 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
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

int	main(void)
{
	char    dest[23]= "Salut, Com";
        char    src[] = "ment tu vas ?";
	char	dest1[23] = "Salut, Com";
	char	src1[] = "ment tu vas ?";

	printf("%s \n", strcat(dest, src));
	printf("%s \n", ft_strcat(dest1, src1));
}*/
