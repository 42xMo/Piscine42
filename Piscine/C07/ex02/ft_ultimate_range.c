/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:43:50 by mabdessm          #+#    #+#             */
/*   Updated: 2024/03/03 17:56:09 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (max - min);
}

/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	tab;
	int	*range;

	i = 0;
	tab = ft_ultimate_range(&range ,0, 20);
	while (i < 20 - 0)
	{	
		printf("%i",range[i]);
		i++;
	}
	printf("\n%i", tab);
}*/
