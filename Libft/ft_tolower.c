/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:29:22 by placombe          #+#    #+#             */
/*   Updated: 2024/10/19 12:58:21 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
#include <stdio.h>
int	main()
{
	char test_char = 'A';
    char result;

    result = ft_toupper(test_char);
    printf("c\n", test_char);
    printf("%c\n", result);
}*/
