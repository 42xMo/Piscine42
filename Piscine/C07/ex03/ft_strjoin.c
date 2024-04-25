/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:06:46 by mabdessm          #+#    #+#             */
/*   Updated: 2024/03/04 18:09:49 by mabdessm         ###   ########.fr       */
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

void	ft_join(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result[k++] = strs[i][j];
			j++;
		}
		j = 0;
		if (i < size - 1)
		{
			while (sep[j] != '\0')
			{
				result[k++] = sep[j];
				j++;
			}
		}
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (size == 0)
	{
		result = malloc(sizeof(char) * 1);
		result[0] = 0;
		return (result);
	}
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += (ft_strlen(sep) * (size - 1));
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (0);
	ft_join(result, strs, sep, size);
	return (result);
}

/*#include <stdio.h>
int	main()
{
	char	**strs;
	char	*sep;
	int	size;
	char	*result;

	strs = malloc(sizeof(char *) * 3);
	strs[0] = malloc(sizeof(char) * 4);
	strs[1] = malloc(sizeof(char) * 6);
	strs[2] = malloc(sizeof(char) * 6);
	strs[0] = "kjbgkse";
	strs[1] = "Hello";
	strs[2] = "World";
	sep = "test";
	size = 3;
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
}*/
