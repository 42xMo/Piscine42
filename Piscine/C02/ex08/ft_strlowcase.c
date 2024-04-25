/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:06:49 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/20 18:15:56 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 65 && str[a] <= 90)
			str[a] = str[a] + 32;
		a++;
	}
	return (str);
}

/*#include <stdio.h>

int     main(void)
{
        char    a[] = "ABCDEFG";
        char    b[] = "ABCdeFG";
        char    c[] = "AKBZ_e>ifLS{";

        printf("%s \n", ft_strlowcase(a));
        printf("%s \n", ft_strlowcase(b));
        printf("%s \n", ft_strlowcase(c));
}*/
