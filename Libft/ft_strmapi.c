/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:18:37 by placombe          #+#    #+#             */
/*   Updated: 2024/10/27 10:36:24 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*str;

	i = 0;
	if (!(f) || !s)
		return (NULL);
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
