/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:29:41 by placombe          #+#    #+#             */
/*   Updated: 2024/10/19 12:58:30 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*
#include <stdio.h>
int	main()
{
	char test_char = 'a';
    char result;

    result = ft_toupper(test_char);
    printf("c\n", test_char);
    printf("%c\n", result);
}*/
