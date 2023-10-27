/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:48:44 by axcallet          #+#    #+#             */
/*   Updated: 2022/09/04 17:36:39 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_algo(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= '1' && str[0] <= '9')
		{
			ft_digit(str[0]);
			i++;
		}
		else if (str[1] == '1')
		{
			ft_special_numbers(str[2]);
			return ;
		}
		else if (str[1] >= '2' && str[1] <= '9')
		{
			ft_print_tenth(str[1]);
			i++;
		}
		else if (str[2] >= '1' && str[2] <= '9')
			ft_digit(str[2]);
	}
}
