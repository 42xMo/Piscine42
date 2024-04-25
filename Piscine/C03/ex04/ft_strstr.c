/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:23:44 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/25 18:47:28 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			k = i;
			while (to_find[j] != '\0' && str[k] == to_find[j])
			{
				k++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	haystack[] = "Hello and Welcome to 42 Nice";
	char	needle[] = "Welcome to";
	char	haystack1[] = "Hello and Welcome to 42 Nice";
	char	needle1[] = "Welcome to";
	char    haystack2[] = "Hello and Welcome to 42 Nice";
	char    needle2[] = "Welcone";
	char    haystack3[] = "Hello and Welcome to 42 Nice";
	char    needle3[] = "Welcone";
	char    haystack4[] = "Hello and Welcome to 42 Nice";
	char    needle4[] = "";
	char    haystack5[] = "Hello and Welcome to 42 Nice";
	char    needle5[] = "";

	printf("%s \n", strstr(haystack, needle));
	printf("%s \n", ft_strstr(haystack1, needle1));
        printf("%s \n", strstr(haystack2, needle2));
        printf("%s \n", ft_strstr(haystack3, needle3));
	printf("%s \n", strstr(haystack4, needle4));
        printf("%s \n", ft_strstr(haystack5, needle5));
}*/
