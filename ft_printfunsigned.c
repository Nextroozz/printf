/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:41:19 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/20 13:48:38 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void static	ecrire(unsigned int nb, unsigned int fd, int *out)
{
	unsigned int	i;

	i = 0;
	if (nb > 9)
	{
		i = nb % 10;
		nb = ((nb - i) / 10);
		ecrire(nb, fd, out);
	}
	else
	{
		i = nb;
	}
	ft_putchar_fd(i + '0', fd);
	*out += 1;
}

void static	ft_putnbr_modif_fd(unsigned int n, unsigned int fd, int *out)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
		*out += 1;
		ecrire(n, fd, out);
	}
	else
		ecrire(n, fd, out);
}

void	ft_printfunsigned(va_list par_list, int *out)
{
	int	i;

	i = va_arg(par_list, unsigned int);
	ft_putnbr_modif_fd(i, 1, out);
}
