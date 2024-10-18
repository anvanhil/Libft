/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:26:40 by placombe          #+#    #+#             */
/*   Updated: 2024/10/18 15:26:46 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	chr;

	i = 0;
	chr = c;
	while (s[i] != '\0')
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == chr)
		return (((char *)&s[i]));
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char test[] = "Hey, comment tu vas?";
	printf("%s", strchr(test, 'z'));
	return (0);
}*/
