/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:48:31 by mjouot            #+#    #+#             */
/*   Updated: 2022/09/04 18:01:14 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_digit(char c)
{
	if (c == '0')
		ft_print_number("zero");
	if (c == '1')
		ft_print_number("one");
	if (c == '2')
		ft_print_number("two");
	if (c == '3')
		ft_print_number("three");
	if (c == '4')
		ft_print_number("four");
	if (c == '5')
		ft_print_number("five");
	if (c == '6')
		ft_print_number("six");
	if (c == '7')
		ft_print_number("seven");
	if (c == '8')
		ft_print_number("eight");
	if (c == '9')
		ft_print_number("nine");
}

void	ft_special_numbers(char c)
{
	if (c == '0')
		ft_print_number("ten");
	if (c == '1')
		ft_print_number("eleven");
	if (c == '2')
		ft_print_number("twelve");
	if (c == '3')
		ft_print_number("thirteen");
	if (c == '4')
		ft_print_number("fourteen");
	if (c == '5')
		ft_print_number("fifteen");
	if (c == '6')
		ft_print_number("sixteen");
	if (c == '7')
		ft_print_number("seventeen");
	if (c == '8')
		ft_print_number("eighteen");
	if (c == '9')
		ft_print_number("nineteen");
}

void	ft_print_tenth(char c)
{
	if (c == '2')
		ft_print_number("twenty");
	if (c == '3')
		ft_print_number("thirty");
	if (c == '4')
		ft_print_number("fourty");
	if (c == '5')
		ft_print_number("fifty");
	if (c == '6')
		ft_print_number("sixty");
	if (c == '7')
		ft_print_number("seventy");
	if (c == '8')
		ft_print_number("eighty");
	if (c == '9')
		ft_print_number("ninety");
}
