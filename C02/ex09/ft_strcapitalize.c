/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:13:36 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/20 20:58:09 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	a;

	if (str[0] == '\0')
		return (str);
	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 65 && str[a] <= 90)
			str[a] = str[a] + 32;
		a++;
	}
	a = 0;
	if (str[a] >= 97 && str[a] <= 122)
		str[a] = str[a] - 32;
	a = 1;
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
			if (!((str[a - 1] >= 97 && str[a - 1] <= 122)
					|| (str[a - 1] >= 65 && str[a - 1] <= 90)
					|| (str[a - 1] >= 48 && str[a - 1] <= 57)))
				str[a] = str[a] - 32;
		a++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots";
	char	str2[] = "quarante-Deux; cinquante+Et+un";
	printf("%s \n", ft_strcapitalize(str));
	printf("%s", ft_strcapitalize(str2));
}*/
