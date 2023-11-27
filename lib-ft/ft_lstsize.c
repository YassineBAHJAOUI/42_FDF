/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:21:01 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:28:46 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
printf("The size of the list is: %d\n", ft_lstsize(list));
return (0);
} */
