/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:18:21 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/12 17:10:20 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = 0;
	if (dst)
		dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dlen >= siz)
		return (siz + slen);
	i = 0;
	while (i < siz - dlen - 1 && src[i])
	{
		dst[i + dlen] = src[i];
		i++;
	}
	if (dlen + i < siz)
		dst[i + dlen] = 0;
	return (slen + dlen);
}
/*#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%zu\n", ft_strlcat(argv[1],argv[2],5));
	return argc;
}*/
