/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:24:39 by placombe          #+#    #+#             */
/*   Updated: 2024/10/19 12:55:22 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (d <= s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
		{
			*d-- = *s--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char test[] = "Salut je vais super bien";
	char test2[] = "World";
	ft_memmove(test, test2, 3);
	printf("%s", test);
	return (0);
}*/
