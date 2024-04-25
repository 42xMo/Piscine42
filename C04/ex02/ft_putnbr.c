/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:29:09 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/22 14:47:54 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= 9 && nb >= 0)
		ft_putchar('0' + nb);
}

/*int   main(void)
{
        ft_putnbr(12567);
        ft_putchar('\n');
        ft_putnbr(1);
        ft_putchar('\n');
        ft_putnbr(-6);
        ft_putchar('\n');
        ft_putnbr(-12343);
        ft_putchar('\n');
        ft_putnbr(2147483647);
        ft_putchar('\n');
        ft_putnbr(-2147483648);
}*/
