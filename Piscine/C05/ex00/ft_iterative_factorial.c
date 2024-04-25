/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:48:12 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/29 15:30:28 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		factorial = 1;
		i = nb;
		while (i > 0)
		{
			factorial = factorial * i;
			i--;
		}
	}
	return (factorial);
}

/*#include <stdio.h>

int	main(void)
{
	printf("-3! : %i\n", ft_iterative_factorial(-3));
	printf("0! : %i\n", ft_iterative_factorial(0));
	printf("4! : %i\n", ft_iterative_factorial(4));
	printf("30! : %i\n", ft_iterative_factorial(30));
}*/
