/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:51:37 by placombe          #+#    #+#             */
/*   Updated: 2024/10/18 18:01:29 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*trim;

	i = 0;
	len = ft_strlen(s1);
	trim = (char *)malloc((sizeof(char ) * len) + 1);
	while (s1[i] != '\0')
	{
		if (s1[i] == set)
			i++;
		else
		{
			trim[i] = s1[i];
			i++;
		}
	}
	return (trim);
} 
