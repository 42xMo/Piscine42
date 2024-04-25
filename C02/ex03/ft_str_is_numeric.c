/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:48:38 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/20 11:59:24 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 48 || str[a] > 57)
			return (0);
		a++;
	}
	return (1);
}

/*#include <stdio.h>i

int     main(void)
{
	printf("%i \n", ft_str_is_numeric("123405689384201"));
        printf("%i \n", ft_str_is_numeric(""));
	printf("%i \n", ft_str_is_numeric("ABFJKFNSDILeohsfsSDLF"));
        printf("%i \n", ft_str_is_numeric("13GRGOSdkg22343"));
}*/
