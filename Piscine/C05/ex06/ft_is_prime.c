/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:03:18 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/28 20:32:20 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / 2 && i <= 46340)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("-6 : %i\n", ft_is_prime(-6));
	printf("0 : %i\n", ft_is_prime(0));
	printf("1 : %i\n", ft_is_prime(1));
	printf("2 : %i\n", ft_is_prime(2));
	printf("3 : %i\n", ft_is_prime(3));
	printf("4 : %i\n", ft_is_prime(4));
	printf("5 : %i\n", ft_is_prime(5));
	printf("67 : %i\n", ft_is_prime(67));
	printf("112 : %i\n", ft_is_prime(112));
	printf("2147483637 : %i\n", ft_is_prime(2147483637));
	printf("2147483647 : %i\n", ft_is_prime(2147483647));
	printf("524287 : %i\n", ft_is_prime(524287));
}*/
