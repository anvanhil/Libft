/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:27:38 by placombe          #+#    #+#             */
/*   Updated: 2024/10/18 15:27:45 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	else
	{
		while (src[i] && --size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello, World!";
	char	dst[9] = {0};
	size_t	len;

	len = ft_strlcpy(dst, src, sizeof(dst));
	
	printf("Source: \"%s\"\n", src);
	printf("Destination: \"%s\"\n", dst);
	printf("Length of source: %zu\n", len);
	
	return (0);
}*/
