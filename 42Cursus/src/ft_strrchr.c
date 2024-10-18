/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:29:02 by placombe          #+#    #+#             */
/*   Updated: 2024/10/18 15:29:09 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		chr;
	const char	*occ;

	occ = NULL;
	i = 0;
	chr = c;
	while (s[i] != '\0')
	{
		if (s[i] == chr)
			occ = &s[i];
		i++;
	}
	if (chr == '\0')
		return ((char *)&s[i]);
	return ((char *)occ);
}
/*
#include <stdio.h>
int main()
{
	char test[] = "Salut";
	printf("%s", ft_strrchr(test, 'Z'));
	return (0);
}*/
