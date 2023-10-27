/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdhaussy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:13:00 by tdhaussy          #+#    #+#             */
/*   Updated: 2022/08/28 16:54:15 by parinder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"
#include <stdlib.h>

void	ft_destroy_int(int **tab)
{
	int	i;

	i = 0;
	while (i < 4)
		free(tab[i++]);
	free(tab);
}

void	ft_destroy_char(char **tab)
{
	int	i;

	i = 0;
	while (i < 4)
		free(tab[i++]);
	free(tab);
}
