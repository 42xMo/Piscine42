/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:37:20 by mabdessm          #+#    #+#             */
/*   Updated: 2024/03/03 12:43:09 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_words(char *str)
{
	int	nb_de_mots;
	int	i;

	nb_de_mots = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		while (str[i] != '\0' && str[i] != ' ')
		{
			if (i == 0 || str[i-1] == ' ')
				nb_de_mots++;
			i++;
		}
	}
	return (nb_de_mots);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i", count_words(argv[1]));
}
