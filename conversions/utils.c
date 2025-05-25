/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:43:22 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/25 16:40:11 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_size(uintptr_t ptr)
{
	int	size;

	size = 0;
	while (ptr >= 16)
	{
		ptr = ptr / 16;
		size++;
	}
	return (size + 1);
}

int	get_size(long nb, long base)
{
	int				size;
	unsigned int	n;

	size = 0;
	if (nb < 0)
	{
		n = -nb;
		size++;
	}
	else
		n = nb;
	while (n >= base)
	{
		n = n / base;
		size++;
	}
	return (size + 1);
}

void	print_unsigned(unsigned int nb)
{
	if (nb >= 10)
	{
		print_unsigned(nb / 10);
	}
	ft_putnbr_fd(nb % 10, 1);
}

int	print_hex(unsigned int nbr, char c)
{
	int		count;
	char	*base_uc;
	char	*base_lc;

	count = get_size(nbr, 16);
	base_uc = "0123456789ABCDEF";
	base_lc = "0123456789abcdef";
	if (c == 'X')
	{
		if (nbr >= 16)
			print_hex((nbr / 16), c);
		ft_putchar_fd(base_uc[nbr % 16], 1);
	}
	else if (c == 'x')
	{
		if (nbr >= 16)
			print_hex((nbr / 16), c);
		ft_putchar_fd(base_lc[nbr % 16], 1);
	}
	return (count);
}

void	print_adress(uintptr_t adress)
{
	char	*base;

	base = "0123456789abcdef";
	if (adress >= 16)
		print_adress(adress / 16);
	ft_putchar_fd(base[adress % 16], 1);
}
