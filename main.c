/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 19:24:20 by barmarti          #+#    #+#             */
/*   Updated: 2025/05/24 15:33:28 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    //int len1, len2;
    
    ft_printf("\n");
    ft_printf("Test :\n%d %i\n", -123, -456);
    
    /*// Test simple de texte brut
    len1 = ft_printf("(mine) Hello, world!\n");
    len2 = printf("(real) Hello, world!\n");
    printf("mine returned: %d | real returned: %d\n\n", len1, len2);

    // Test %c
    len1 = ft_printf("(mine) Character: %c ||  %c\n", 'A', 'C');
    len2 = printf("(real) Character: %c ||  %c\n", 'A', 'C');
    printf("mine returned: %d | real returned: %d\n\n", len1, len2);

    // Test %s
    len1 = ft_printf("(mine) String: %s\n", "42");
    len2 = printf("(real) String: %s\n", "42");
    printf("mine returned: %d | real returned: %d\n\n", len1, len2);

    // Test %d et %i
    len1 = ft_printf("(mine) Decimal (%%d): %d | (mine) Integer (%%i): %i\n", -123, -456);
    len2 = printf("(real) Decimal (%%d): %d | (real) Integer (%%i): %i\n", -123, -456);
    printf("mine returned: %d | real returned: %d\n\n", len1, len2);

    // Test %u
    len1 = ft_printf("(mine) Unsigned: %u\n", 3000000000U);
    len2 = printf("(real) Unsigned: %u\n", 3000000000U);
    printf("ft_printf returned: %d | real returned: %d\n\n", len1, len2);

    // Test %x et %X
    len1 = ft_printf("(mine) Hex lowercase: %x | (mine) Hex uppercase: %X\n", 48879, 48878);
    len2 = printf("(real) Hex lowercase: %x | (real) Hex uppercase: %X\n", 48879, 48878);
    printf("mine returned: %d | real returned: %d\n\n", len1, len2);

    // Test %p
    int x = 42;
    len1 = ft_printf("(mine) Pointer: %p\n", &x);
    len2 = printf("(real) Pointer: %p\n", &x);
    printf("mine returned: %d | real returned: %d\n\n", len1, len2);

    // Test %%
    len1 = ft_printf("(mine) Percent sign: %%\n");
    len2 = printf("(real) Percent sign: %%\n");
    printf("mine returned: %d | real returned: %d\n\n", len1, len2);*/

    return (5);
}
