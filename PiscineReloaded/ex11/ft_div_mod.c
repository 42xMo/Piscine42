/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:41:09 by mabdessm          #+#    #+#             */
/*   Updated: 2024/04/17 15:48:29 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;

	a = 17;
	b = 3;
	div = 0;
	mod = 0;
	printf("%i,%i,%i,%i\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("%i,%i,%i,%i\n", a, b, div, mod);
}*/
