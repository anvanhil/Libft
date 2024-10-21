/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:17:50 by placombe          #+#    #+#             */
/*   Updated: 2024/10/21 12:22:01 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}
/*
#include<stdio.h>
int main()
{
	int	arr[] = {1, 2 ,3 ,4 ,5 ,6 ,7};
	int loop = 0;
	ft_bzero(arr, (6 * sizeof(int)));
	while (loop < 7)
	{
		printf("%d", arr[loop]);
		loop++;
	}
	return (0);
}*/
