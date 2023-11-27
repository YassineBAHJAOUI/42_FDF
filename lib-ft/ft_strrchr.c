/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:54:58 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:36:33 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i++;
	while (--i > 0)
		if (*(s + i) == (unsigned char)c)
			return ((char *)(s + i));
	if (*s == (unsigned char)c)
		return ((char *)(s + i));
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Bonjour, comment allez-vous?";
    char c = ',';
    char *result;
    
    result = strrchr(str, c);
    if (result) {
        printf("La première occurrence de '%c' se
 trouve à la position %ld\n", c, result - str + 1);
    } else {
        printf("Le caractère '%c' n'a pas été trou
vé dans la chaîne '%s'\n", c, str);
    }
    
    return 0;
}*/
