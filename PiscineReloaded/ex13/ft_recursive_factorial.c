/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:03:20 by mabdessm          #+#    #+#             */
/*   Updated: 2024/04/18 13:18:28 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb > 0 && nb < 13)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}

/*#include <stdio.h>

int     main(void)
{
        printf("-3! : %i\n", ft_recursive_factorial(-3));
        printf("0! : %i\n", ft_recursive_factorial(0));
        printf("4! : %i\n", ft_recursive_factorial(4));
        printf("30! : %i\n", ft_recursive_factorial(30));
}*/
