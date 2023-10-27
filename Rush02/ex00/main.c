/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:44:25 by axcallet          #+#    #+#             */
/*   Updated: 2022/09/04 17:38:06 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int argc, char **argv)
{
	if (argc > 3 || argc == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
	{
		if (ft_check_max(argv[1]) == 0)
		{
			write(2, "Error\n", 6);
			return (1);
		}
	}
	if (argc == 3)
	{
		if (ft_check_max(argv[2]) == 0)
		{
			write(2, "Error\n", 6);
			return (1);
		}
	}
	return (0);
}
