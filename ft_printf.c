/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:51:36 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/20 18:16:20 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_choice(const char *var, va_list par_list, int *out)
{
	if (var[1] == 'c')
		ft_printfchar(par_list, out);
	if (var[1] == 's')
		ft_printfstr(par_list, out);
	if (var [1] == 'i' || var[1] == 'd')
		ft_printfint(par_list, out);
	if (var[1] == '%')
	{
		write (1, "%", 1);
		*out += 1;
	}
	if (var[1] == 'u')
		ft_printfunsigned(par_list, out);
	if (var[1] == 'X')
		ft_printfhexamaj(par_list, out);
	if (var[1] == 'x')
		ft_printfhexalow(par_list, out);
	if (var[1] == 'p')
		ft_printfpointer(par_list, out);
}

int	ft_printf(const char *var, ...)
{
	va_list	par_list;
	int		out;
	int		i;

	i = 0;
	out = 0;
	va_start(par_list, var);
	while (var[i])
	{
		if (var[i] != '%')
		{
			write (1, &var[i], 1);
			out++;
		}
		else
		{
			ft_printf_choice(var + i, par_list, &out);
			i++;
		}
		i++;
	}
	return (out);
}
/*#include <stdio.h>
int main()
{
	printf("%d", printf(" %p %p ", 0, 0));
	return 0;
}*/