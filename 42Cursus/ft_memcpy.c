/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:24:17 by placombe          #+#    #+#             */
/*   Updated: 2024/10/19 14:51:45 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (dest);
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char test[] = "Hello";
	char test2[] = "World";
	ft_memcpy(test, test2, 3);
	printf("%s", test);
	return (0);
}*/
