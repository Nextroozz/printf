/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:51:40 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/13 12:38:21 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;

	if (big == NULL && len == 0)
		return (NULL);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		i2 = 0;
		while (big[i + i2] == little[i2] && (i + i2) < len)
		{
			i2++;
			if (little[i2] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <string.h>
 #include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("%s\n", ft_strnstr(argv[1],argv[2],6));
	return argc;
}*/