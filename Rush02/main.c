/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:57:01 by mabdessm          #+#    #+#             */
/*   Updated: 2024/03/03 15:21:32 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_atoa(char *str);
extern int	check_error(char *str);
extern int	check_dict_error(char *dict);
extern void	write_number(char *str, char *dict);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_atoa(argv[1]);
		if (check_error(argv[1]))
			write(1, "Error\n", 6);
		else
		{
			write_number(argv[1], "dico_en");
		}
	}
	else if (argc == 3)
	{
		ft_atoa(argv[2]);
		if (check_error(argv[2]))
			write(1, "Error\n", 6);
		else if (check_dict_error(argv[1]))
			write(1, "Dict Error\n", 11);
		else
		{
			write_number(argv[2], argv[1]);
		}
	}
}
