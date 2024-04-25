/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:29:28 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/25 16:58:08 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int	ft_count_numbers(char *str);
extern void	draw_grid(char *tab);
extern char	*fill_grid(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2 && ft_count_numbers(argv[1]) == 31)
	{
		draw_grid("1234234134124123");
	}
	else
	{
		write(1, "Error", 5);
	}
}
