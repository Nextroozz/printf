/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:46:39 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/20 13:38:53 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void static	ecrire(int nb, int fd, int *out)
{
	int	i;

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

void static	ft_putnbr_modif_fd(int n, int fd, int *out)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		*out += 11;
	}
	if (n != -2147483648)
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
}

void	ft_printfint(va_list par_list, int *out)
{
	int	i;

	i = va_arg(par_list, int);
	ft_putnbr_modif_fd(i, 1, out);
}
