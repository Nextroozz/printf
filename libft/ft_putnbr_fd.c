/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:05:21 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/13 15:04:44 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ecrire(int nb, int fd)
{
	int	i;

	i = 0;
	if (nb > 9)
	{
		i = nb % 10;
		nb = ((nb - i) / 10);
		ecrire(nb, fd);
	}
	else
	{
		i = nb;
	}
	ft_putchar_fd(i + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	if (n != -2147483648)
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar_fd('-', fd);
			ecrire(n, fd);
		}
		else
			ecrire(n, fd);
	}
}
