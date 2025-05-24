/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:07:45 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/24 16:41:49 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	handle_convertion(char specifier, va_list args)
{
	int		count;

	count = 0;
	printf("handle_convertion('%c') called\n", specifier);
	if (specifier == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else if (specifier == 'd' || specifier == 'i')
		count = print_num(va_arg(args, int));
	else if (specifier == 'u')
		count = print_unit(va_arg(args, unsigned int));
	else if (specifier == 'x')
		count = print_x_lc(va_arg(args, unsigned int));
	else if (specifier == 'X')
		count = print_x_uc(va_arg(args, unsigned int));
	else if (specifier == 's')
		count = print_string(va_arg(args, char *));
	else if (specifier == 'c')
		count = print_char(va_arg(args, int));
	else if (specifier == 'p')
		count = print_ptr(va_arg(args, void *));
	return (count);
}
