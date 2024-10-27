/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:28:41 by placombe          #+#    #+#             */
/*   Updated: 2024/10/27 09:40:29 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	if (!little)
		return (NULL);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *) big + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main()
{
	//char s1[] = "";
	char s2[] = "fake";
	printf("%s\n", ft_strnstr(((void *)0), s2, 3));
	//printf("%s\n", strnstr(((void *)0), s2, 15));
	return (0);
}*/
