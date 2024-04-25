/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:38:53 by mabdessm          #+#    #+#             */
/*   Updated: 2024/04/22 09:12:57 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	count_words(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}
		while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		{
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
				nb++;
			i++;
		}
	}
	return (nb);
}

int	lenword(char *str, int index)
{
	int	i;
	int	nb;
	int	len_word;

	i = 0;
	nb = 0;
	len_word = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}
		while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		{
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
				nb++;
			if (nb == index)
				len_word++;
			i++;
		}
	}
	return (len_word);
}

char	*get_word(char *str, int index)
{
	char	*word;
	int		i;
	int		j;
	int		nb;

	i = 0;
	j = 0;
	nb = 0;
	word = malloc(sizeof(char) * lenword(str, index) + 1);
	if (!word)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		{
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
				nb++;
			if (nb == index)
			{
				word[j] = str[i];
				j++;
			}
			i++;
		}
	}
	word[lenword(str, index)] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**split;
	int	i;

	i = 0;
	split = malloc(sizeof(char*) * count_words(str) + 1);
	while (i < count_words(str))
	{
		split[i] = get_word(str, i + 1);
		i++;
	}
	split[i] =  NULL;
	return (split);
}

#include <stdio.h>
int	main(void)
{
	int	i;

	i = 0;
	while (i < 6)
	{
		printf("%s\n", ft_split("j'en  ai   marre   de  split     ")[i]);
		i++;
	}
}
