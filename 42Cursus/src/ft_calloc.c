/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:20:22 by placombe          #+#    #+#             */
/*   Updated: 2024/10/18 15:20:49 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = malloc (nmemb * size);
	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	while (i < nmemb * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
