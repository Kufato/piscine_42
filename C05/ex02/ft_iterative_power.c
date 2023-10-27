/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:28:37 by axcallet          #+#    #+#             */
/*   Updated: 2022/09/01 08:57:01 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if ((nb == 0 && power > 0) || power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * i;
		power--;
	}
	return (nb);
}
