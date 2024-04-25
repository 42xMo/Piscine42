/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:39:13 by mabdessm          #+#    #+#             */
/*   Updated: 2024/04/17 18:45:58 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	result = malloc(sizeof(int) * (max - min));
	if (!result)
		return (0);
	if (min >= max)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

/*#include <stdio.h>
int	main()
{
	int	i;
	int	*tab;

	i = 0;
	tab = ft_range(0, 20);
	while (i < (20 - 0))
	{
		printf("%i", tab[i]);
		i++;
	}
}*/
