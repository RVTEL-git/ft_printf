/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:08:16 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/24 16:39:08 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_param(char c)
{
	if (c == '%' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' 
	|| c == 's' || c == 'c' || c == 'p')
		return (1);
	return (0);
}

int	check_format(char *format)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == 37 && format[i + 1] && check_param(format[i + 1]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	print_str(char *format, va_list args)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == 37 && format[i + 1])
		{
			count = count + handle_convertion(format[i + 1], args);
			i = i + 2;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			i++;
			count++;
		}
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	if (!format)
		return (-1);
	va_start(args, format);
	if (check_format((char *)format) == 1)
	{
		va_end(args);
		return (-1);
	}
	count = print_str((char *)format, args);
	va_end(args);
	return (count);
}
