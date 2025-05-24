/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:40:20 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/24 17:10:06 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		handle_convertion(char specifier, va_list args);
int		get_size(long nb);
int		print_num(int	i);
int		print_unit(unsigned int uni);
int		print_x_lc(int x_lc);
int		print_x_uc(int x_uc);
int		print_string(char *str);
int		print_ptr(void *ptr);
int		print_char(int c);

void	print_unsigned(unsigned int nb);
void	ft_putnbr_base(int nbr, int base_len, char *base);

#endif
