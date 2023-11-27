/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:52 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:31:32 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst->next;
	}
}
/* int main(void)
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
ft_lstiter(list, print_content);
return (0);
}  */
