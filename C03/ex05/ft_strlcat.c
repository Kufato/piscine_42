/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:14:37 by axcallet          #+#    #+#             */
/*   Updated: 2022/08/25 15:35:17 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dest_size >= size)
	{
		return (src_size + size);
	}
	while ((src[i] != '\0') && (i < size))
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest_size + src_size);
}
