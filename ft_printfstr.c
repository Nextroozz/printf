/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:09:03 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/20 17:48:48 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printfstr(va_list par_list, int *out)
{
	char	*str;

	str = va_arg(par_list, char *);
	if (str != (void *)0)
	{
		ft_putstr_fd(str, 1);
		*out += ft_strlen(str);
	}
}
