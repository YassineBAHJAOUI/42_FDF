/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:19:52 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:20:33 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
		new -> next = *lst;
	*lst = new;
}
/*
int main(void)
{
t_list *list = NULL;
t_list *new;
int i = 10;

new = ft_lstnew(&i);
ft_lstadd_front(&list, new);
printf("The first element of the list is: %d\n", *(int *)(list->content));
return (0);
} */
