/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:18:37 by placombe          #+#    #+#             */
/*   Updated: 2024/10/22 10:14:56 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *)malloc(sizeof(char ) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include<stdio.h>
int main()
{
	char test[] = "salut";
	unsigned int nb = 15;
	ft_strmapi(test, ft_toupper(15));
	printf("%s", test);
	return 0;
}*/