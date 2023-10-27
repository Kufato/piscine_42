/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PAX <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:36:01 by PAX               #+#    #+#             */
/*   Updated: 2022/08/28 19:05:11 by parinder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H

void	ft_putchar(char c);
void	algo(char **tab, int size);
void	ft_destroy_int(int **tab);
void	ft_destroy_char(char **tab);
void	ft_print(int **tab, int size);
int		ft_error(char **tab, int size);
int		ft_is_solvable(char **tab, int size);
int		ft_check(int **tab, int x, int y, int value);
int		ft_tab_init(char **tab_final, char *tab, int size);
int		ft_is_finished(char **tab, int **int_tab, int size);
int		call_up_down(char **tab, int **int_tab, int size);

#endif
