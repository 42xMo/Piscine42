/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:33:58 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/28 20:41:57 by mabdessm         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0 && nb <= 2147483647)
	{
		nb++;
	}
	return (nb);
}

/*#include <stdio.h>

int	main()
{
	printf("-6 : %i\n", ft_find_next_prime(-6));
	printf("0 : %i\n", ft_find_next_prime(0));
	printf("1 : %i\n", ft_find_next_prime(1));
	printf("2 : %i\n", ft_find_next_prime(2));
	printf("3 : %i\n", ft_find_next_prime(3));
	printf("4 : %i\n", ft_find_next_prime(4));
	printf("5 : %i\n", ft_find_next_prime(5));
	printf("6 : %i\n", ft_find_next_prime(6));
	printf("7 : %i\n", ft_find_next_prime(7));
	printf("8 : %i\n", ft_find_next_prime(8));
	printf("9 : %i\n", ft_find_next_prime(9));
	printf("10 : %i\n", ft_find_next_prime(10));
	printf("11 : %i\n", ft_find_next_prime(11));
	printf("11 : %i\n", ft_find_next_prime(12));
}*/
