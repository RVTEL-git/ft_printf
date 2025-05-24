/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numerals.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:05:43 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/24 17:01:23 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	print_num(int	i)
{
	int	size;


	printf("print_num received: %d\n", i);
	size = get_size(i);
	ft_putnbr_fd(i, 1);
	return (size);
}

int	print_unit(unsigned int	uni)
{
	int	size;

	size = get_size(uni);
	print_unsigned(uni);
	return (size);
}

int	print_x_lc(int	x_lc)
{
	int	size;

	size = get_size(x_lc);
	ft_putnbr_base(x_lc, 16, "0123456789abcdef");
	return (size);
}

int	print_x_uc(int	x_uc)
{
	int	size;

	size = get_size(x_uc);
	ft_putnbr_base(x_uc, 16, "0123456789ABCDEF");
	return (size);
}
