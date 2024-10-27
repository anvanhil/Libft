/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: placombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:50:14 by placombe          #+#    #+#             */
/*   Updated: 2024/10/23 09:44:20 by placombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
/*void	del_content(void *content)
{
	free(content);
}
#include<stdio.h>
int main()
{
	t_list *s;
	t_list *s2;
	t_list *s3;

    char *element = ft_strdup("bozo");
    char *element2 = ft_strdup("FF15");
    char *element3 = ft_strdup("Oh Darling");
	
    s = ft_lstnew(element);
	s2 = ft_lstnew(element2);
	s3 = ft_lstnew(element3);
	
	s->next =s2;
	s2->next = s3;

	ft_lstdelone(s3,&del_content);
    return 0;

}

int main(void)
{
    // Création d'un nœud de la liste
    t_list *node;

    // Allocation de mémoire pour le nœud
    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return (1);

    // Allocation de mémoire pour le contenu 
	(par exemple une chaîne de caractères)
    node->content = malloc(20 * sizeof(char)); // 20 octets pour un test simple
    if (!node->content)
    {
        free(node);
        return (1);
    }
    	
    // Remplir le contenu (par exemple avec une chaîne)
    sprintf((char *)node->content, "Hello, World!");

    // Affichage avant suppression pour voir si le contenu est correct
    printf("Avant suppression : %s\n", (char *)node->content);

    // Suppression du nœud et de son contenu avec ft_lstdelone
    ft_lstdelone(node, del_content);

    // Plus besoin d'afficher après la suppression, la mémoire a été libérée
    printf("Après suppression : le nœud a été supprimé.\n");

    return (0);
}*/
