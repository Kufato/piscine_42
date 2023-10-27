/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:28:06 by mjouot            #+#    #+#             */
/*   Updated: 2022/09/04 18:00:40 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

int		ft_strlen(char *str);
int		ft_check_input(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_check_max(char *str);
int		ft_strlen(char *str);
void	ft_digit(char c);
void	ft_print_tenth(char c);
void	ft_special_numbers(char c);
void	ft_print_number(char *str);
char	*ft_strstr(char *str, char *to_find);
void	ft_algo(char *str);

#endif
