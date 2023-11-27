/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:17:04 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/06 14:58:30 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		*(unsigned char *)(b + i) = (unsigned char) c;
	return (b);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20] = "Hello, World!";
    memset(str, '-', 7);
    printf("%s\n", str);

    return (0);
} */
