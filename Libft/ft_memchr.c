/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:23:06 by placombe          #+#    #+#             */
/*   Updated: 2024/10/19 17:46:37 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	chr;

	str = (unsigned char *) s;
	chr = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	char test[] = "salut";
	const char *p = ft_memchr(test, 'l', 2);
	printf("%s", p);
	return (0);
}*/
