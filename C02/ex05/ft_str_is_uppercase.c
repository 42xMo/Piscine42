/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:07:14 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/20 12:11:50 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 65 || str[a] > 90)
			return (0);
		a++;
	}
	return (1);
}

/*#include <stdio.h>

int     main(void)
{
        printf("%i \n", ft_str_is_uppercase("WOHNWHSIQASNXZLSPORIDN"));
        printf("%i \n", ft_str_is_uppercase(""));
        printf("%i \n", ft_str_is_uppercase("ABFJKFNSDILeohsfsSDLF"));
        printf("%i \n", ft_str_is_uppercase("13GRGOSd[kg2__]2343"));
}*/
