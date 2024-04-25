/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:20:35 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/20 20:47:13 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] <= 31 || str[a] >= 127)
			return (0);
		a++;
	}
	return (1);
}

/*#include <stdio.h>

int     main(void)
{
        printf("%i \n", ft_str_is_printable("1#FEFfgg;h42{0]_)_esfswrWQEQre1"));
        printf("%i \n", ft_str_is_printable(""));
	printf("%i \n", ft_str_is_printable("\n\t"));
        printf("%i \n", ft_str_is_printable("ABFJKFNSDIL\teoh\nsfsSiDLF"));
}*/
