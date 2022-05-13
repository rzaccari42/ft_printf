/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_x_upper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:58:28 by rzaccari          #+#    #+#             */
/*   Updated: 2022/05/12 20:24:36 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	format_x_upper(Input *args)
{
	char	*upper_x;
	int		i;

	upper_x = itoa_hex_upper(va_arg(args->arguments, unsigned int));
	i = 0;
	while (upper_x[i])
		args->char_count += write(1, &upper_x[i++], 1);		
	free(upper_x);
}

char	*itoa_hex_upper(unsigned int nbr)
{
	char	*base;
	char	*str;
	int		i;
	int		rem;

	base = "0123456789ABCDEF";
	str = malloc((nbrlen_hex(nbr) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = nbrlen_hex(nbr);
	str[i] = 0;
	if (nbr == 0)
	{
		rem = (nbr % 16);
		str[--i] = base[rem];
	}
	while (nbr > 0)
	{
		rem = (nbr % 16);
		str[--i] = base[rem];
		nbr /= 16;
	}
	return (str);
}

