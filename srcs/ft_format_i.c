/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:58:28 by rzaccari          #+#    #+#             */
/*   Updated: 2022/05/12 20:24:09 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	format_i(Input *args)
{   
    int		i;
    char	*d;

    i = 0;
    d = ft_itoa(va_arg(args->arguments, int));
    while (d[i])
        args->char_count += write(1, &d[i++], 1);
	free(d);
}

