/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:26:04 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:27:42 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	del(lst -> content);
	free(lst);
}
/*int main(void)
{
t_list *list = NULL;
t_list *new;
int i = 10;

new = (t_list *)malloc(sizeof(t_list));
new->content = &i;
new->content_size = sizeof(i);
new->next = NULL;
list = new;
printf("The element in the list is: %d\n", *(int *)(list->content));
ft_lstdelone(&list, ft_memdel);
if (!list)
    printf("The list is now empty\n");
return (0);
}*/
