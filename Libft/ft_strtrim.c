/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:51:37 by placombe          #+#    #+#             */
/*   Updated: 2024/10/27 09:51:01 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, const char *set)
{
	int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*trim;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && check_set(s1[start], set))
		start++;
	while (end > start && check_set(s1[end], set))
		end--;
	trim = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trim)
		return (NULL);
	i = 0;
	while (start <= end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
/*
#include<stdio.h>
int main()
{
    char s[] = "S SalutS S";
    char set[] = "S";
    printf("Resultat : '%s'\n", ft_strtrim(s, set));
    return 0;
}*/
