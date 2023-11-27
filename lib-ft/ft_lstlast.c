/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:21:44 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:39:33 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
printf("The last element in the list is: %d\n",
 *(int *)(ft_lstlast(list)->content));
return (0);
}*/
