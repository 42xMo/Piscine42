/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:14:04 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/20 11:46:52 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 65 || str[a] > 122 || (str[a] > 90 && str[a] < 97))
			return (0);
		a++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i \n", ft_str_is_alpha("ABFJKFNSDILeohsfsSDLF"));
	printf("%i \n", ft_str_is_alpha(""));
	printf("%i \n", ft_str_is_alpha("13GRGOSdkg22343"));
	printf("%i \n", ft_str_is_alpha("WQEWsada[]__wadWEW"));
}*/
