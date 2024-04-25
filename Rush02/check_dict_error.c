/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:16:00 by mabdessm          #+#    #+#             */
/*   Updated: 2024/03/03 15:40:11 by mabdessm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_dict_error(char *str)
{
	if (str[0] == '\0')
		return (1);
	return (0);
}

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	offset(int *i, int *j)
{
	*i += 1;
	*j -= 1;
}

int	check_dict_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(str);
	if (str[i] == '\0')
		return (1);
	while (str[i] >= '0' && str[i] <= '9')
		offset(&i, &j);
	while (str[i] == ' ')
		offset(&i, &j);
	if (str[i] == ':')
		offset(&i, &j);
	while (str[i] == ' ')
		offset(&i, &j);
	while (str[i] >= 32 && str[i] <= 126)
		offset(&i, &j);
	if (str[i] == '\n')
		offset(&i, &j);
	if (j == 0)
		return (0);
	return (1);
}*/
