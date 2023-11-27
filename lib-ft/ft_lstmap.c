/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:31:56 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:33:08 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*root;

	if (!lst || !f || !del)
		return (NULL);
	root = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&root, del);
			return (NULL);
		}
		ft_lstadd_back(&root, node);
		lst = lst->next;
	}
	return (root);
}
/*int main(void)
{
t_list *list = NULL;
t_list *new;
t_list *new_list;
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
new_list = ft_lstmap(list, double_content);
while (new_list)
{
printf("%d\n", *(int *)(new_list->content));
new_list = new_list->next;
}
return (0);
}  */
