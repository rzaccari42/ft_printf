/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:58:28 by rzaccari          #+#    #+#             */
/*   Updated: 2022/05/12 20:24:22 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void    format_s(Input *args)
{
    int	    i;
    char    *s;
    
    i = 0;
    s = va_arg(args->arguments, char*);
    if (s == NULL)
		s = "(null)";
    while (s[i])
        args->char_count += write(1, &s[i++], 1);
}

