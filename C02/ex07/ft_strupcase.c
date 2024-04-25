/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:26:07 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/20 18:06:14 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	a[] = "abcdefg";
	char	b[] = "AbcdEFg";
	char	c[] = "akbs_E>IFls{";

	printf("%s \n", ft_strupcase(a));
	printf("%s \n", ft_strupcase(b));
	printf("%s \n", ft_strupcase(c));
}*/
