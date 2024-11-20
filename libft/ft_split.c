/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:51:32 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/18 13:17:50 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	world_lenght(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

int static	get_out_lenght(char const *s, char c)
{
	int	out;
	int	i;

	i = 0;
	out = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			out++;
			i += world_lenght(s + i, c);
		}
		else
			i++;
	}
	return (out);
}

char static	*special_strdup(char const *s, char c, int *outi)
{
	char	*out;
	int		i;

	out = ft_calloc(world_lenght(s, c) + 1, sizeof(char));
	if (out)
	{
		i = 0;
		while (s[i] != c && s[i])
		{
			out[i] = s[i];
			i++;
		}
		*outi += world_lenght(s, c);
	}
	else
		return (NULL);
	return (out);
}

void static	free_split(char **out, int i)
{
	while (i > 0)
	{
		free(out[i]);
		i--;
	}
	free(out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		j;

	out = ft_calloc(get_out_lenght(s, c) + 1, sizeof(char *));
	if (!out)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			out[j] = special_strdup(s + i, c, &i);
			if (!out[j])
			{
				free_split(out, j);
				return (NULL);
			}
			j++;
		}
		else
			i++;
	}
	return (out);
}
/*#include <stdio.h>
int main(int argc, char const *argv[])
{
	int	i;

	i = 0;
	ft_split(argv[1], argv[2][0]);
	return argc;
}*/