/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:47:38 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:06:41 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		f(i, s + i);
}
/*int main(void)
{
char str[] = "Hello World";
printf("The original string is: %s\n", str);
ft_striteri(str, &change_case);
printf("The new string is: %s\n", str);
return (0);
}*/
