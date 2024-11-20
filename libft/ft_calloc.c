/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:46:25 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/13 17:39:48 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;
	size_t	i;

	i = 0;
	if (size > 0)
		if (2147483647 / size < nmemb)
			return (NULL);
	out = malloc(nmemb * size);
	if (!out)
		return (NULL);
	while (i < nmemb * size)
	{
		((unsigned char *)out)[i] = 0;
		i++;
	}
	return (out);
}
