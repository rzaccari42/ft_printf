/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:54:43 by rzaccari          #+#    #+#             */
/*   Updated: 2022/05/13 17:46:35 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct input
{
	va_list	arguments;
	int		char_count;
}	t_input;

int		ft_printf(const char *input, ...);
void	format(t_input *args, char c);
void	format_c(t_input *args);
void	format_s(t_input *args);
void	format_p(t_input *args);
void	format_d(t_input *args);
void	format_i(t_input *args);
void	format_u(t_input *args);
void	format_x_lower(t_input *args);
void	format_x_upper(t_input *args);
void	format_pc(t_input *args);
int		nbrlen(int nbr);
int		nbrlen_unsigned(unsigned int nbr);
int		nbrlen_hex(unsigned int nbr);
int		nbrlen_hex_p(unsigned long long nbr);
char	*ft_itoa(int nbr);
char	*itoa_unsigned(unsigned int nbr);
char	*itoa_hex_lower(unsigned int nbr);
char	*itoa_hex_upper(unsigned int nbr);
char	*itoa_hex_p(unsigned long long nbr);

#endif
