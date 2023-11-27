/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:24:36 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:37:05 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)s + i);
	return (NULL);
}
/*  #include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *str = "Bonjour";
    char c = 'j';
    char *result = memchr(str, c, strlen(str));
    if (result == NULL) {
        printf("Le caractère '%c' n'a pas été tr
ouvé dans la chaîne '%s'\n", c, str);
    } else {
        printf("Le caractère '%c' se trouve à l'index 
%ld dans la chaîne '%s'\n", c, result - str, str);
    }
    return 0;
}*/
