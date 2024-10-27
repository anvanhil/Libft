/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:27:18 by placombe          #+#    #+#             */
/*   Updated: 2024/10/27 12:21:02 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (size == 0)
		return (srclen);
	if (size <= dstlen)
		return (size + srclen);
	while (src[i] && (dstlen + i) < (size - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*#include<stdio.h>
#include<bsd/string.h>
int main()
{
	char *dst  = NULL;
	char *src = NULL;
	printf("%zu", strlcat(dst,src, 5));
	return 0;
}*/
