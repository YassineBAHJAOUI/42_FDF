/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:11:32 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:05:41 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	str = ft_calloc(ft_strlen(s) + 1, sizeof (char));
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}
/*int main(void)
{
char *str = "Hello World";
char *new_str = ft_strmapi(str, &change_case);
printf("The original string is: %s\n", str);
printf("The new string is: %s\n", new_str);
free(new_str);
return (0);
}  */
