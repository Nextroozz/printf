/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:31:46 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/18 14:58:55 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	in_set(char c, char const *set)
{
	int	i;

	i = ft_strlen(set);
	while (i >= 0)
	{
		if (c == set[i])
			return (1);
		i--;
	}
	return (0);
}

int static	starting_point(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (in_set(s1[i], set) == 1)
		i++;
	return (i);
}

int static	ending_point(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen(s1);
	while (in_set(s1[end], set) == 1)
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	int		i;
	int		j;
	int		end;

	end = ending_point(s1, set);
	i = starting_point(s1, set);
	j = 0;
	if (end <= 0 || !s1 || ft_strlen(s1) < 1)
	{
		out = ft_calloc(1, sizeof(char));
		return (out);
	}	
	out = ft_calloc((end - i) + 2, sizeof(char));
	if (out)
	{
		while (i <= end && end > 0)
		{
			out[j++] = s1[i++];
		}
		out[j] = '\0';
	}
	return (out);
}
/*#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%s\n",ft_strtrim(argv[1], argv[2]));
	return argc;
}*/