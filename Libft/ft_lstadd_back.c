/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:25:44 by placombe          #+#    #+#             */
/*   Updated: 2024/10/23 11:08:42 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*#include<stdio.h>
int main()
{
    t_list *s = NULL;

    t_list *element = ft_lstnew("bozo");
    t_list *element2 = ft_lstnew("FF15");
	t_list *element3 = ft_lstnew("Oh Darling");

    ft_lstadd_front(&s,element);
    ft_lstadd_front(&s,element2);
	ft_lstadd_back(&s,element3);
    t_list *lst = s;
     while (lst)
     {
         printf("Content--------: %s\n", (char *)lst->content);
         lst = lst->next;
     }

    return 0;
}*/
