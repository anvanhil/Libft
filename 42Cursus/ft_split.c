/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:04:47 by placombe          #+#    #+#             */
/*   Updated: 2024/10/21 15:42:00 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int		i;
	int		count;
	int		isword;

	i = 0;
	count = 0;
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

static void	init_var(size_t *i, int *j, int *word)
{
	*i = 0;
	*j = 0;
	*word = -1;
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		i;
	int			j;
	int			word;

	init_var(&i, &j, &word);
	res = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
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
/*
#include<stdio.h>
int main(void) {
    char **result;
    int i;
 
    char *str = "Pour  qui sont  ces serpents!";    
    result = ft_split(str, ' ');
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
}*/
