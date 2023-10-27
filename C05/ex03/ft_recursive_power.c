/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:51:41 by axcallet          #+#    #+#             */
/*   Updated: 2022/09/01 11:35:44 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if ((nb == 0 && power > 0) || power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	return (ft_recursive_power(nb, power - 1) * nb);
}
