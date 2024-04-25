/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:08:57 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/22 15:09:57 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (i >= n)
		return (0);
	return (s1[i] - s2[i]);
}

/*#include <string.h>
#include <stdio.h>

int     main(void)
{
        char    s1[] = "ABCD";
        char    s2[] = "ABCA";

        printf("%i \n", strncmp(s1, s2, 3));
        printf("%i \n", ft_strncmp(s1, s2, 3));
        printf("%i \n", strncmp(s1, s2, 4));
        printf("%i \n", ft_strncmp(s1, s2, 4));
	printf("%i \n", strncmp(s1, s2, 6));
        printf("%i \n", ft_strncmp(s1, s2, 6));
}*/
