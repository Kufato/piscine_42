/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:51:05 by mjouot            #+#    #+#             */
/*   Updated: 2022/09/04 16:05:26 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//char *parse_3(char *dict, char *str_3);

#include "ft_header.h"

void	ft_print_number(char *str)
{
	int		j;
	int		fd;
	char	dict[65534];

	j = 0;
	fd = open("numbers.dict", O_RDONLY);
	read(fd, dict, 65534);
	close(fd);
	while (ft_strstr(dict, str)[j] != '\n')
	{
		write(1, &ft_strstr(dict, str)[j], 1);
		j++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}	
	return (0);
}
