/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:20:22 by placombe          #+#    #+#             */
/*   Updated: 2024/10/21 13:00:06 by placombe         ###   ########.fr       */
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
/*#include<stdio.h>
int main()
{
	int nb = 5;
	int	*arr;
	int loop = 0;

	arr = (int *)ft_calloc(nb,sizeof(int));
	if (!arr)
		return (1);
	while (loop < nb)
	{
		printf("%d",arr[nb]);
		loop++;
	}
	return (0);
}*/
