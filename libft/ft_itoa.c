/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:39:28 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/18 14:10:02 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	static	get_lln(long n)
{
	int	out;

	out = 1;
	while (n / 10 > 0)
	{
		n /= 10;
		out++;
	}
	return (out);
}

void static	pass_line(long *ln, int *n, int *lln)
{
	*ln = *n;
	*lln = 0;
	if (*ln < 0)
	{
		*lln = 1;
		*ln *= -1;
	}
	*lln += get_lln(*ln);
}

char	*ft_itoa(int n)
{
	long	ln;
	char	*out;
	int		lln;
	int		i;

	pass_line(&ln, &n, &lln);
	out = ft_calloc(lln + 1, sizeof(char));
	if (out)
	{
		i = 0;
		if (n < 0)
			out[i] = '-';
		while (i < lln && !out[lln - i - 1])
		{
			out[lln - i - 1] = (ln % 10) + '0';
			ln /= 10;
			i++;
		}
	}
	return (out);
}
/*#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%s\n",ft_itoa(ft_atoi(argv[1])));
	return argc;
}*/