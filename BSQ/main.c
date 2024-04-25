/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:44:20 by mabdessm          #+#    #+#             */
/*   Updated: 2024/03/06 14:50:35 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

extern int	check_error(char *grille);
extern void	fill_grid(char *grille);
extern void	ft_putstr(char *str);

int	read_grid(char *buffer, int argc, char **argv)
{
	int	fichier;
	int	n;
	int	i;

	i = 0;
	while (++i < argc)
	{
		fichier = open(argv[i], O_RDONLY);
		if (fichier == -1)
			return (0);
		n = read(fichier, buffer, 1000000);
		if ((n != -1) && !(check_error(buffer)))
		{
			fill_grid(buffer);
			close(fichier);
		}
		else
			write(1, "map error", 9);
		write(1, "\n", 1);
	}
	return (1);
}

void	read_standard_input(char *buffer)
{
	int	n;

	ft_putstr("Veuillez saisir votre grille :\n");
	n = read(0, buffer, 1000000);
	if ((n != -1) && !(check_error(buffer)))
		fill_grid(buffer);
	else
		write(1, "map error", 9);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	char	*buffer;

	buffer = malloc(sizeof(char) * 1000000);
	if (argc > 1)
		read_grid(buffer, argc, argv);
	else
		read_standard_input(buffer);
	free(buffer);
	return (0);
}
