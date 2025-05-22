/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:08:16 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/22 13:15:42 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
===/!\/!\/!\===/!\/!\/!\===/!\/!\/!\===

	%%
	% seul en fin de ligne
	carctere invalide apres %
	
===/!\/!\/!\===/!\/!\/!\===/!\/!\/!\===
*/



int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	parameters_infos;

	if (!format)
		return (0);
	va_start(parameters_infos, format);
	count = 0;
	while (format[i])
	{
		if (format[i] == 37 && format[i + 1])
		{
			handle_convertion(format[i + 1], parameters_infos);
		}
		ft_putchar_fd(format[i], 1);
		count++;
	}
	va_end(parameters_infos);
	return (count);
}
