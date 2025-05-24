/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:36:28 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/24 16:59:53 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *str)
{
	int	size;
	
	size = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (size);
}

int	print_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	print_ptr(void	*ptr)
{
	uintptr_t	n;
	int			size;

	n = (uintptr_t)ptr;
	size = 2 + get_size(n);
	ft_putstr_fd("0x", 1);
	ft_putnbr_base(n, 16, "0123456789acdef");
	return (size);
}
