/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:58:28 by rzaccari          #+#    #+#             */
/*   Updated: 2022/05/13 17:38:02 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	format_d(t_input *args)
{
	int		i;
	char	*d;

	i = 0;
	d = ft_itoa(va_arg(args->arguments, int));
	while (d[i])
		args->char_count += write(1, &d[i++], 1);
	free(d);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;

	str = malloc((nbrlen(nbr) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = nbrlen(nbr);
	str[i] = 0;
	if (nbr < 0)
	{
		str[0] = '-';
		str[--i] = -(nbr % 10) + 48;
		if (nbr < -9)
			nbr /= -10;
	}
	if (nbr == 0)
		str[--i] = (nbr % 10) + 48;
	while (nbr > 0)
	{
		str[--i] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (str);
}

int	nbrlen(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr /= -10;
		i = 2;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}
