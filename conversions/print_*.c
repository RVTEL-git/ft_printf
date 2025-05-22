/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_*.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:05:43 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/22 18:15:05 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_num(va_list args)
{
	int	size;

	size = get_size(va_arg(args, unsigned int));
	ft_putnbr_fd(va_arg(args, int), 1);
	return (size);
}

int	print_unit(va_list args)
{
	int	size;

	size = get_size(va_arg(args, unsigned int));
	print_unsigned(va_arg(args, unsigned int));
	return (size);
}

int	print_x_lc(va_list args)
{
	int	size;

	size = get_size(va_arg(args, int));
	ft_putnbr_base(va_arg(args, int), 16, "0123456789abcdef");
	return (size);
}

int	print_x_uc(va_list args)
{
	int	size;

	size = get_size(va_arg(args, int));
	ft_putnbr_base(va_arg(args, int), 16, "0123456789ABCDEF");
	return (size);
}
