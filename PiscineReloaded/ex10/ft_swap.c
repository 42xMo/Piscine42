/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:37:12 by mabdessm          #+#    #+#             */
/*   Updated: 2024/04/17 15:40:29 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 2;
	printf("%i%i\n", a, b);
	ft_swap(&a, &b);
	printf("%i%i\n", a, b);
}*/
