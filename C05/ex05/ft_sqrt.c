/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:26:38 by axcallet          #+#    #+#             */
/*   Updated: 2022/08/31 11:01:58 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 46340;
	while ((i * i) != nb && i > 0)
		i--;
	if ((i * i) == nb)
		return (i);
	return (0);
}
