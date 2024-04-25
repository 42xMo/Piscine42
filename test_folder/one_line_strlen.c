/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_line_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:26:25 by mabdessm          #+#    #+#             */
/*   Updated: 2024/03/03 12:48:21 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	one_line_strlen(char *str) {for (int i = 0; ;i++) if (i[str] == '\0') return i;}




#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i", one_line_strlen(argv[1]));
}
