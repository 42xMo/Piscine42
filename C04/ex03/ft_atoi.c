/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:51:16 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/22 19:36:04 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	x;

	i = 0;
	x = 0;
	signe = 1;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i] != '\0')
	{
		i++;
	}
	while ((str[i] == '+' || str[i] == '-') && str[i] != '\0')
	{
		if (str[i] == '-')
		{
			signe = signe * -1;
		}
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x * signe);
}

/*#include <stdlib.h>
#include <stdio.h>

int	main()
{
	char	str[] = "  -1234ab56";
	char    str1[] = "  ---++--227193rfio324";

	printf("%i \n", atoi(str));
	printf("%i", ft_atoi(str1));
}*/
