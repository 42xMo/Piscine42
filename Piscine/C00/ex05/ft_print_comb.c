/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:18:36 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/14 19:19:02 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	first_number;
	int	second_number;
	int	third_number;

	first_number = '0';
	while (first_number <= '7')
	{
		second_number = first_number + 1;
		while (second_number <= '8')
		{
			third_number = second_number + 1;
			while (third_number <= '9')
			{
				write (1, &first_number, 1);
				write (1, &second_number, 1);
				write (1, &third_number, 1);
				if (first_number != '7')
					write (1, ", ", 2);
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
