/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:28:41 by placombe          #+#    #+#             */
/*   Updated: 2024/10/18 15:28:48 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *) big + i);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main()
{
	char s1[] = "Hey, ca va";
	char s2[] = "ca";
	printf("%s\n", ft_strnstr(s1, s2, 10));
	printf("%s\n", strnstr(s1, s2, 10));
	return (0);
}*/
