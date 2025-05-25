/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:40:20 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/25 16:43:30 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

# include "libft/libft.h"

int		handle_convertion(char specifier, va_list args);
int		print_hex(unsigned int nbr, char c);
int		ft_printf(const char *format, ...);
int		print_x(int x, char specifier);
int		print_unit(unsigned int uni);
int		get_size(long nb, long base);
int		ptr_size(uintptr_t ptr);
int		print_string(char *str);
int		print_ptr(void *ptr);
int		print_char(int c);
int		print_num(int i);

void	print_unsigned(unsigned int nb);
void	print_adress(uintptr_t adress);

#endif
