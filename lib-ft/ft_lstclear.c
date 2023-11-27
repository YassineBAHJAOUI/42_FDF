/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:29:22 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:30:10 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*t;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		t = tmp;
		tmp = tmp->next;
		del(t -> content);
		free(t);
	}
	*lst = NULL;
}
/*int main(void)
{
t_list *list = NULL;
t_list *new;
int i = 10;
int j = 20;

new = (t_list *)malloc(sizeof(t_list));
new->content = &i;
new->content_size = sizeof(i);
new->next = NULL;
list = new;
new = (t_list *)malloc(sizeof(t_list));
new->content = &j;
new->content_size = sizeof(j);
new->next = NULL;
list->next = new;
ft_lstclear(&list, ft_memdel);
if (!list)
    printf("The list is now empty\n");
return (0);
} */
