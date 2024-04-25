/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:08:44 by mabdessm          #+#    #+#             */
/*   Updated: 2024/04/17 16:51:13 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	min;
	int	max;
	int	mid;

	i = 0;
	min = 0;
	max = 46340;
	if (nb <= 0)
		return (0);
	if (max * max == nb)
		return (max);
	while (i < 50)
	{
		mid = (min + max) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid > nb)
			max = mid;
		if (mid * mid < nb)
			min = mid;
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n",ft_sqrt(-43));
	printf("%i\n",ft_sqrt(23));
	printf("%i\n",ft_sqrt(0));
	printf("%i\n",ft_sqrt(9));
	printf("%i\n",ft_sqrt(25));
	printf("%i\n",ft_sqrt(100));
	printf("%i\n",ft_sqrt(2500));
}*/
