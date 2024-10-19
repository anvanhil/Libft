/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:20:22 by placombe          #+#    #+#             */
/*   Updated: 2024/10/19 18:03:09 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*alloc;
	size_t			i;

	alloc = malloc (nmemb * size);
	i = 0;
	if (!alloc)
		return (NULL);
	while (i < nmemb * size)
	{
		alloc[i] = 0;
		i++;
	}
	return (alloc);
}
