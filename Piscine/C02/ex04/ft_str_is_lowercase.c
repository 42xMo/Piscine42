/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:00:45 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/20 12:06:35 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 97 || str[a] > 122)
			return (0);
		a++;
	}
	return (1);
}

/*#include <stdio.h>

int     main(void)
{
        printf("%i \n", ft_str_is_lowercase("jsbfglkblkawlkas"));
        printf("%i \n", ft_str_is_lowercase(""));
        printf("%i \n", ft_str_is_lowercase("ABFefsdthWdhdIDLF"));
        printf("%i \n", ft_str_is_lowercase("13GRGOSdkg22343_[_]sfvgsAEWFW"));
}*/
