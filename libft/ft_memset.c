/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:30:54 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/06 14:30:55 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	char	buffer[10];

	ft_memset(buffer, 'c', sizeof(char) * 5);
	ft_memset(buffer + 5, 'd', sizeof(char) * 5);

	for (int i = 0; i< 10; i++)
		printf("%c", buffer[i]);
	printf("\n");
	return 0;
}*/
