/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 08:45:12 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/13 15:26:11 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while ((ss1[i] || ss2[i]) && i < n)
	{
		if (ss1[i] > ss2[i])
		{
			return (1);
		}
		else if (ss1[i] < ss2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
	char	s1[] = "hell5";
	char	s2[] = "hello";
	printf("%d",ft_strncmp(s1,s2,));
	return 0;
}*/