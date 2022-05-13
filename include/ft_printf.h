/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:54:43 by rzaccari          #+#    #+#             */
/*   Updated: 2022/05/12 17:19:16 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdarg.h"
#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

typedef struct input
{
	va_list arguments; 
	int	char_count;
}	Input;
  
int		ft_printf(const char *input, ...);
void	format(Input *args, char c);
void	format_c(Input *args);
void	format_s(Input *args);
void	format_p(Input *args);
void	format_d(Input *args);
void	format_i(Input *args);
void	format_u(Input *args);
void	format_x_lower(Input *args);
void	format_x_upper(Input *args);
void	format_pc(Input *args);
int		nbrlen(int nbr);
int		nbrlen_unsigned(unsigned int nbr);
int		nbrlen_hex(unsigned int nbr);
int		nbrlen_hex_p(unsigned long long nbr);
char	*ft_itoa(int nbr);
char	*itoa_unsigned(unsigned int nbr);
char	*itoa_hex_lower(unsigned int nbr);
char	*itoa_hex_upper(unsigned int nbr);
char	*itoa_hex_p(unsigned long long nbr);

