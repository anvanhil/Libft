/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:24:17 by placombe          #+#    #+#             */
/*   Updated: 2024/10/24 11:51:09 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*#include<string.h>
#include <stdio.h>
int	main()
{
	char *test = NULL;
	char *test2 = NULL;
	//ft_memcpy(test, test2, 3);
	memcpy(test,test2,3);
	//printf("%s", test);
	return (0);
}*/
