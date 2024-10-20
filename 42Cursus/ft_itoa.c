/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:55:49 by placombe          #+#    #+#             */
/*   Updated: 2024/10/20 15:15:49 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_count(long nb)
{
	size_t	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len = 1;
	}
	if (nb == 0)
		len = 1;
	else
	{
		while (nb)
		{
			nb /= 10;
			len++;
		}
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long			nb;
	char			*str;
	size_t			len;
	int				sign;

	len = size_count((size_t)n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	nb = (size_t)n;
	sign = 0;
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
		sign = 1;
	}
	str[len] = '\0';
	while (len > (size_t) sign)
	{
		str[len - 1] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	return (str);
}
/*#include<stdio.h>
int main()
{
	int test = 124;
	printf("%s", ft_itoa(test));
	return 0;
}*/
