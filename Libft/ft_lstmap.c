/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:09:58 by placombe          #+#    #+#             */
/*   Updated: 2024/10/23 14:04:14 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*str;
	t_list	*new_elem;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	str = NULL;
	while (lst)
	{
		tmp = (*f)(lst->content);
		new_elem = ft_lstnew(tmp);
		if (!new_elem)
		{
			del(tmp);
			ft_lstclear(&str, del);
			return (NULL);
		}
		ft_lstadd_back(&str, new_elem);
		lst = lst->next;
	}
	return (str);
}
