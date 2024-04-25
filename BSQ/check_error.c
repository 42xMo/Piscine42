/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:00:37 by mabdessm          #+#    #+#             */
/*   Updated: 2024/03/06 14:28:20 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_first_line(char *grille, int *i, int *res)
{
	int	j;
	int	k;

	j = *i;
	k = *res;
	while (grille[j] <= '0' && grille[j] >= '9' && grille[j] != '\0')
	{
		k = k * 10 + (grille[j] - '0');
		i++;
	}
	if ((grille[j] <= 32 || grille[j] >= 126)
		|| (grille[j + 1] <= 32 && grille[j + 1] >= 126)
		|| (grille[j + 2] <= 32 && grille[j + 2] >= 126)
		|| (grille[j] == grille[j + 1])
		|| (grille[j] == grille[j + 2])
		|| (grille[j + 1] == grille[j + 2]))
		return (1);
	*i = j;
	*res = k;
	return (0);
}

int	check_error(char *grille)
{
	int		i;
	int		res;
	int		nb_chars;
	char	empty;
	char	obstacle;

	i = 0;
	nb_chars = -1;
	res = 1;
	if (check_first_line(grille, &i, &res))
		return (1);
	else
	{
		empty = grille[i];
		obstacle = grille[i + 1];
		i += 2;
	}
	while (grille[++i] != '\0' && ++nb_chars >= 0)
	{
		if (grille[i] != '\n' && grille[i] != obstacle && grille[i] != empty)
			return (1);
	}
	if ((nb_chars <= 1) || ((nb_chars - 1 % res) != 0))
		return (1);
	return (0);
}
