/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:53:11 by gazzopar          #+#    #+#             */
/*   Updated: 2022/09/04 11:31:48 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_input(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	ft_check_max(char *str)
{
	int		i;
	char	*max;

	max = "4294967295";
	i = 0;
	if (ft_check_input(str) == 1)
	{
		if (ft_strlen(str) <= 0)
			return (0);
		else if (ft_strlen(str) > 10)
			return (0);
		else if (ft_strlen(str) == 10)
		{
			while (str[i] != '\0')
			{
				if (ft_strcmp(str, max) > 0)
					return (0);
				i++;
			}
		}
		else
			return (0);
	}
	return (1);
}
