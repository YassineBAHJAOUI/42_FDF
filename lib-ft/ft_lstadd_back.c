/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:22:29 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:28:00 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp -> next)
		tmp = tmp -> next;
	tmp -> next = new;
}
/*int main(void)
{
t_list *list = NULL;
t_list *new;
int i = 10;

new = ft_lstnew(&i);
ft_lstadd_back(&list, new);
i = 20;
new = ft_lstnew(&i);
ft_lstadd_back(&list, new);
i = 30;
new = ft_lstnew(&i);
ft_lstadd_back(&list, new);
while (list)
{
    printf("%d\n", *(int *)list->content);
    list = list->next;
}
return (0);
} */
