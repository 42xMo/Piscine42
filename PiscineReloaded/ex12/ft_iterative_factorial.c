/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:49:13 by mabdessm          #+#    #+#             */
/*   Updated: 2024/04/18 13:13:18 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	i = nb;
	while (i > 0)
	{
		result = result * i;
		i--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("-3! : %i\n", ft_iterative_factorial(-3));
	printf("0! : %i\n", ft_iterative_factorial(0));
	printf("1! : %i\n", ft_iterative_factorial(1));
	printf("5! : %i\n", ft_iterative_factorial(5));
}*/
