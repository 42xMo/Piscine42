/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauffo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 09:44:45 by lchauffo          #+#    #+#             */
/*   Updated: 2024/02/17 18:27:19 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c);

void	write_line(int x, char first, char middle, char last)
{
	int	j;

	j = 2;
	ft_putchar(first);
	while (j < x)
	{
		ft_putchar(middle);
		j++;
	}
	if (j == x)
	{
		ft_putchar(last);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 2;
	if (x > 0 && y > 0)
	{
		write_line(x, '/', '*', '\\');
		while (i < y)
		{
			write_line(x, '*', ' ', '*');
			i++;
		}
		if (i == y)
		{
			write_line(x, '\\', '*', '/');
		}
	}
}
