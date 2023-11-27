/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:24:38 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/06 17:19:47 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	i = -1;
	srcsize = ft_strlen(src);
	if (!dstsize)
		return (srcsize);
	while (src[++i] && i < dstsize - 1)
		*(dst + i) = *(src + i);
	*(dst + i) = '\0';
	return (srcsize);
}
/*#include <string.h>
#include <stdio.h>

int main(void) {
char source[] = "Bonjour";
char destination[10];
int result;

perl
Copy code
result = strlcpy(destination, source, sizeof(destination));
printf("La taille de la chaîne source est de %d\n", result);
printf("La chaîne de destination est : %s\n", destination);

return 0;
} */
