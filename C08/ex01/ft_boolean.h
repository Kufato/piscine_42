/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:17:20 by axcallet          #+#    #+#             */
/*   Updated: 2022/09/07 22:46:00 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef int	t_bool;
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define TRUE 0
# define FALSE 1
# define EVEN(nbr) nbr % 2 == 0
# define SUCCESS 0

#endif
