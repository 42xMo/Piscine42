/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:09:08 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/21 14:50:53 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char    s[] = "ABCD";
        char    s0[] = "ABCD";
	char	s1[] = "ABCD";
	char	s2[] = "ABCA";
	char    s3[] = "ABW";
        char    s4[] = "ABCD";
	char    s5[] = "ABC";
        char    s6[] = "ABCZ";
	char	s7[] = "";
	char	s8[] = "ABC";
	char	s9[] = "ABC";
	char	s10[] = "";

	printf("%i \n", strcmp(s, s0));
        printf("%i \n", ft_strcmp(s, s0));
	printf("%i \n", strcmp(s1, s2));
        printf("%i \n", ft_strcmp(s1, s2));
        printf("%i \n", strcmp(s3, s4));
	printf("%i \n", ft_strcmp(s3, s4));
	printf("%i \n", strcmp(s5, s6));
	printf("%i \n", ft_strcmp(s5, s6));
	printf("%i \n", strcmp(s7, s8));
        printf("%i \n", ft_strcmp(s7, s8));
        printf("%i \n", strcmp(s9, s10));
        printf("%i \n", ft_strcmp(s9, s10));
}*/
