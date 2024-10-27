/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:54:13 by placombe          #+#    #+#             */
/*   Updated: 2024/10/22 12:07:36 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*#include <stdio.h>
int	main()
{
	t_list *s = NULL;

	t_list *element = ft_lstnew("bozo");
	t_list *element2 = ft_lstnew("FF15");

	ft_lstadd_front(&s,element);
	ft_lstadd_front(&s,element2);
	printf("%i",ft_lstsize(s));
	return 0;
}*/
