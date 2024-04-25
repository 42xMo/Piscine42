/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:19:54 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/15 13:41:30 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_number(char x)
{
	write (1, &x, 1);
}

void	ft_write_comb2(int a, int b)
{
	ft_put_number('0' + a / 10);
	ft_put_number('0' + a % 10);
	ft_put_number(' ');
	ft_put_number('0' + b / 10);
	ft_put_number('0' + b % 10);
	if (!(a == 98 && b == 99))
	{
		ft_put_number(',');
		ft_put_number(' ');
	}
}

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	while (first_number <= 99)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			ft_write_comb2(first_number, second_number);
			second_number++;
		}
		first_number++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
