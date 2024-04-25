/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:40:18 by mabdessm          #+#    #+#             */
/*   Updated: 2024/02/19 14:55:43 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	c = 0;
	while (c < size)
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				b = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = b;
			}
			a++;
		}
		c++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int     size;
        int     tab[6] = {8, 3, 5, 7, 2, 4};
        int     size2;
        int     tab2[7] = {3, 4, 1, 7, 2, 3, 0};

        size = 6;
        size2 = 7;
        printf("%i %i %i %i %i %i", tab[0], tab[1], tab[2], tab[3],
        tab[4], tab[5]);
        printf("%c", '\n');
        ft_sort_int_tab(tab, size);
        printf("%i %i %i %i %i %i", tab[0], tab[1], tab[2], tab[3],
        tab[4], tab[5]);
        printf("%c", '\n');
        printf("%i %i %i %i %i %i %i", tab2[0], tab2[1], tab2[2],
        tab2[3], tab2[4], tab2[5], tab2[6]);
        printf("%c", '\n');
        ft_sort_int_tab(tab2, size2);
        printf("%i %i %i %i %i %i %i", tab2[0], tab2[1], tab2[2],
        tab2[3], tab2[4], tab2[5],
        tab2[6]);

}*/
