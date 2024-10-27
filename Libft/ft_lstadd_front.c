/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:43:16 by placombe          #+#    #+#             */
/*   Updated: 2024/10/27 11:25:42 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include<stdio.h>
int main()
{
	t_list *s = NULL;

	t_list *element1 = ft_lstnew("Oh Vieillesse ennemie");
	t_list *element2 = ft_lstnew("OH shit le shit");

	ft_lstadd_front(&s, element1);
	ft_lstadd_front(&s, element2);

	t_list *lst = s;
	while (lst)
    {
        printf("Content--------: %s\n", (char *)lst->content);
        lst = lst->next;
    }
	free(lst);
	return 0;
}*/
