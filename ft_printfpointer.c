/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfpointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:00:35 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/20 17:52:46 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void static	ft_printfhexa(unsigned long long n, int *out)
{
	char	*hexa;

	hexa = "0123456789abcdef";
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

void	ft_printfpointer(va_list par_list, int *out)
{
	void	*ptr;

	ptr = va_arg(par_list, void *);
	ft_putstr_fd("0x", 1);
	ft_printfhexa((unsigned long long)ptr, out);
	*out += 2;
}
