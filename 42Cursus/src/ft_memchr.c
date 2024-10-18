/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:23:06 by placombe          #+#    #+#             */
/*   Updated: 2024/10/18 15:23:26 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	int				i;

	i = 0;
	chr = (char) c;
	str = (unsigned char *) s;
	while (str[i] != '\0' && n--)
	{
		if (str[i] == chr)
			return ((unsigned char *)&str[i]);
		i++;
	}
	if (str[i] == chr)
		return ((unsigned char *)&str[i]);
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	char test[] = "salut";
	const char *p = ft_memchr(test, 'u', 2);
	printf("%s", p);
	return (0);
}*/
