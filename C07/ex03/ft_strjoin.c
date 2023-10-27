/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:20:56 by axcallet          #+#    #+#             */
/*   Updated: 2022/09/07 09:36:10 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != 0)
		size++;
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_call_strcat(int size, char *str_full, char **strs, char *sep)
{
	int	i;

	i = 1;
	while (i < size - 1)
	{
		ft_strcat(str_full, strs[i]);
		ft_strcat(str_full, sep);
		i++;
	}
	ft_strcat(str_full, strs[i]);
	return (str_full);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		size_sep;
	int		size_strs;
	char	*str_full;

	i = 0;
	size_strs = 0;
	if (size == 0)
	{
		str_full = malloc(sizeof(char) * 1);
		*str_full = 0;
	}
	while (i < size)
	{
		size_strs = size_strs + ft_strlen(strs[i]);
		i++;
	}
	size_sep = ft_strlen(sep);
	str_full = malloc(sizeof(char) * (size_strs + size_sep * size));
	ft_call_strcat(size, str_full, strs, sep);
	return (str_full);
}
