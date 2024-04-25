/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:12:45 by mabdessm          #+#    #+#             */
/*   Updated: 2024/03/02 16:08:16 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_error(char *str)
{
	if (!(str[0] >= '0' && str[0] <= '9'))
		return (1);
	return (0);
}
