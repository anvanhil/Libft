/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:04:47 by placombe          #+#    #+#             */
/*   Updated: 2024/10/27 11:24:44 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int		i;
	int		count;
	int		isword;

	i = 0;
	count = i;
	isword = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && isword == 0)
		{
			isword = 1;
			count++;
		}
		else if (s[i] == c)
			isword = 0;
		i++;
	}
	return (count);
}

static char	*word_fill(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	*ft_free(char **s, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

static char	**init_var(const char *s, char **res, int word, char c)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && word < 0)
			word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && word >= 0)
		{
			res[j] = word_fill(s, word, i);
			if (!res[j])
				return (ft_free(res, j));
			word = -1;
			j++;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	int			word;

	word = -1;
	if (!s)
		return (NULL);
	res = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	return (init_var(s, res, word, c));
}
/*#include<string.h>
#include<stdio.h>
int main(void) {
    char **result;
    int i;
 
    //char *str = "Pour qui sont ces serpents";
	char *s = NULL;
    result = ft_split(s, ' ');
    if (!result) {
        printf("Erreur d'allocation de mémoire.\n");
        return (1);
	}
    printf("Résultat du split de la chaîne :\n");
    i = 0;
    while (result[i]) {
        printf("Mot %d : %s\n", i + 1, result[i]);
        i++;
    }
	ft_free(result,i);
	return 0;
}*/
