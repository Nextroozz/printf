/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhexamaj.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:54:09 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/20 14:22:23 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int static	convert_arg(va_list par_list)
{
	int		n;

	n = va_arg(par_list, unsigned int);
	return (n);
}

void static	ft_printfhexa(unsigned int n, int *out)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_printfhexa(n / 16, out);
		ft_printfhexa(n % 16, out);
	}
	else
	{
		write(1, &hexa[n], 1);
		*out += 1;
	}
}

void	ft_printfhexamaj(va_list par_list, int *out)
{
	ft_printfhexa(convert_arg(par_list), out);
}
