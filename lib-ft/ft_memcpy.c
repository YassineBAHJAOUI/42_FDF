/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:28:47 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/06 16:48:35 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src)
		return (dest);
	i = -1;
	while (++i < n)
		*(char *)(dest + i) = *(char *)(src + i);
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Bonjour";
    char destination[20];
    memcpy(destination, source, sizeof(source));
    printf("Contenu de destination : %s\n", destination);
    return 0;
}*/
