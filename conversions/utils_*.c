/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_*.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:43:22 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/22 18:12:51 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_size(long nb)
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
	while (n > 10)
	{
		n = n / 10;
		size++;
	}
	retrun (size + 1);
}

void	print_unsigned(unsigned int nb)
{
	if (nb >= 10)
	{
		print_unsigned(nb / 10);
		print_unsigned(nb % 10);
	}
	ft_putnbr_fd(nb, 1);
}

void	ft_putnbr_base(int nbr, int base_len, char *base)
{
	if (nbr >= base_len)
		ft_putnbr_base((nbr / base_len), base_len, base);
	ft_putchar(base[nbr % base_len]);
}
