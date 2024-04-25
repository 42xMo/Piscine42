/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:56:49 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/26 13:37:26 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	is_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		if (str[i] <= 32 || str[i] >= 127)
			return (1);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	error;

	error = is_error(base);
	if (ft_strlen(base) > 1 && error == 0)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base(nbr * -1, base);
		}
		if (nbr >= ft_strlen(base))
		{
			ft_putnbr_base(nbr / ft_strlen(base), base);
			ft_putnbr_base(nbr % ft_strlen(base), base);
		}
		if (nbr >= 0 && nbr < ft_strlen(base))
		{
			ft_putchar(base[nbr]);
		}
	}
}

/*int	main(void)
{
	ft_putnbr_base(328, "0123456789");
	ft_putchar('\n');
        ft_putnbr_base(-2147483647, "0123456789");
        ft_putchar('\n');
        ft_putnbr_base(328, "01234056789");
        ft_putchar('\n');
        ft_putnbr_base(328, "0123456 789");
        ft_putchar('\n');
        ft_putnbr_base(328, "0123456789ADHFGJTRYUIO;,.");
        ft_putchar('\n');
	ft_putnbr_base(328, "01");
	ft_putchar('\n');
	ft_putnbr_base(328, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(328, "01234567");
}*/
