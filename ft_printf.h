/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:12:25 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/20 17:17:34 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# include "libft.h"

void	ft_printfchar(va_list par_list, int *out);
void	ft_printfstr(va_list par_list, int *out);
void	ft_printfint(va_list par_list, int *out);
void	ft_printfunsigned(va_list par_list, int *out);
void	ft_printfhexamaj(va_list par_list, int *out);
void	ft_printfhexalow(va_list par_list, int *out);
void	ft_printfpointer(va_list par_list, int *out);
int		ft_printf(const char *var, ...);

#endif