/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:18:25 by axcallet          #+#    #+#             */
/*   Updated: 2022/08/22 13:48:38 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		else if (((str[i] <= 47) || ((str[i] >= 58) && (str[i] <= 64))
				|| ((str[i] >= 91) && (str[i] <= 96)) || (str[i] >= 123))
			&& ((str[i + 1] >= 97) && (str[i + 1] <= 122)))
		{
			str[i + 1] = str[i + 1] - 32;
			i++;
		}	
		i++;
	}
	return (str);
}
