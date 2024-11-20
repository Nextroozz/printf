/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:20:37 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/13 17:00:11 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		i;
	int		j;

	out = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	i = 0;
	if (out)
	{
		j = 0;
		while (s1[j])
		{
			out[i] = s1[j];
			j++;
			i++;
		}
		j = 0;
		while (s2[j])
		{
			out[i] = s2[j];
			j++;
			i++;
		}
		out[i] = '\0';
	}
	return (out);
}
/*#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%s\n", ft_strjoin(argv[1],argv[2]));
	return argc;
}*/