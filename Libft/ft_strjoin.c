/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:37:49 by placombe          #+#    #+#             */
/*   Updated: 2024/10/27 09:33:40 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		s1len;
	int		s2len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	join = (char *)malloc((sizeof(char ) * s1len + s2len) + 1);
	if (!join)
		return (NULL);
	while (s1[i] != '\0')
		join[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		join[j++] = s2[i++];
	join[j] = '\0';
	return (join);
}
/*#include<string.h>
#include<stdio.h>
int main()
{
	char s1[] = "Bonjour";
	char s2[] = "salut";
	char *p = ft_strjoin(s1,s2);
	printf("%s", p);
	return 0;
}*/
