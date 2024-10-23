/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:08:27 by placombe          #+#    #+#             */
/*   Updated: 2024/10/22 14:53:29 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*#include<stdio.h>
int main()
{
    t_list *s = NULL;

    t_list *element = ft_lstnew("bozo");
    t_list *element2 = ft_lstnew("FF15");

    ft_lstadd_front(&s,element);
    ft_lstadd_front(&s,element2);

	t_list *last = ft_lstlast(s);
    printf("%s",(char *)last->content);
    return 0;
}*/
