/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:05:03 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/19 14:13:30 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printfchar(va_list par_list, int *out)
{
	char	c;

	c = va_arg(par_list, int);
	write(1, &c, 1);
	*out += 1;
}
