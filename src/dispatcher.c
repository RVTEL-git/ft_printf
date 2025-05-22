/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:07:45 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/22 17:38:19 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_convertion(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == '%')
	{
		ft_putchar_fd('%', 1);
		retunr (1);
	}
	else if (specifier == 'd' || specifier == 'i')
	{
		count = print_num(va_arg(args, int));
	}
	else if (specifier == 'u')
		count = print_unit(va_arg(args, int));
	else if (specifier == 'x')
		count = print_x_lc(va_arg(args, int))
	else if (specifier == 'X')
		count = 
	else if (specifier == 's')
		count =
	else if (specifier == 'c')
		count =
	else if (specifier == 'p')
		count =
	else
	
	return (count);
}
