/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:47:08 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/26 19:08:40 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}

/*#include <stdio.h>

int     main(void)
{
        printf("3**-3 : %i\n", ft_recursive_power(3, -3));
        printf("3**0 : %i\n", ft_recursive_power(3, 0));
        printf("3**4 : %i\n", ft_recursive_power(3, 4));
        printf("3**30 : %i\n", ft_recursive_power(3, 30));
}*/
