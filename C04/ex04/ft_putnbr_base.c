/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:22:05 by axcallet          #+#    #+#             */
/*   Updated: 2022/08/29 17:56:10 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int	ft_base_verif(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	size_base;
	long	nb;

	nb = (long)nbr;
	if (ft_base_verif(base) == 1)
		return ;
	size_base = ft_strlen(base);
	if (size_base < 2)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < size_base)
		ft_putchar(base[nb]);
	if (nb > size_base - 1)
	{
		ft_putnbr_base(nb / size_base, base);
		ft_putnbr_base(nb % size_base, base);
	}
}
