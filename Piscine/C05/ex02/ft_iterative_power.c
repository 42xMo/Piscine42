/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:25:51 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/29 15:32:27 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		result = 1;
		i = 0;
		while (i < power)
		{
			result = result * nb;
			i++;
		}
	}
	return (result);
}

/*#include <stdio.h>

int     main(void)
{
        printf("3**-3 : %i\n", ft_iterative_power(3, -3));
        printf("3**0 : %i\n", ft_iterative_power(3, 0));
        printf("3**4 : %i\n", ft_iterative_power(3, 4));
        printf("3**30 : %i\n", ft_iterative_power(3, 30));
}*/
