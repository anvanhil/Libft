/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:25:00 by placombe          #+#    #+#             */
/*   Updated: 2024/10/21 11:47:19 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*dest;

	dest = (unsigned char *)s;
	while (len--)
	{
		*dest++ = (unsigned char)c;
	}
	return (s);
}
/*#include<stdio.h>
int main()
{
	char s[] = "Hello bozo";
	ft_memset(s + 6, '.',4);
	printf("%s", s);
	return (0);
}*/
