/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:54:34 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/06 17:18:32 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (dst > src)
		while (len--)
			*(char *)(dst + len) = *(char *)(src + len);
	else if (src > dst)
		while (++i < len)
			*(char *)(dst + i) = *(char *)(src + i);
	return (dst);
}
/*int main() {
    char source[] = "Bonjour";
    char destination[20];
    ft_memmove(destination, source, sizeof(source));
    printf("Contenu de destination : %s\n", destination);
    return 0;
}*/
