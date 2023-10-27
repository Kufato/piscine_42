/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:36:11 by axcallet          #+#    #+#             */
/*   Updated: 2022/08/17 09:47:24 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	m;
	char	p;

	m = 'N';
	p = 'P';
	if (n < 0)
	{
		ft_putchar(m);
	}
	if (n >= 0)
	{
		ft_putchar(p);
	}
}
