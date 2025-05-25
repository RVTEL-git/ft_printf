/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numerals.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:05:43 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/25 15:33:28 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	print_num(int i)
{
	int	size;

	size = get_size(i, 10);
	ft_putnbr_fd(i, 1);
	return (size);
}

int	print_unit(unsigned int uni)
{
	int	size;

	size = get_size(uni, 10);
	print_unsigned(uni);
	return (size);
}

int	print_x(int x, char specifier)
{
	int	size;

	size = print_hex(x, specifier);
	return (size);
}
