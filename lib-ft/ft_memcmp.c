/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:43:02 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 14:54:39 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n - 1
		&& *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
		i++;
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
/*#include <stdio.h>
#include <string.h>

int main(void) {
char str1[15];
char str2[15];
int ret;

strcpy(str1, "abcdef");
strcpy(str2, "ABCDEF");

ret = memcmp(str1, str2, 6);

if(ret > 0) {
printf("str1 est plus grand que str2\n");
} else if(ret < 0) {
printf("str1 est plus petit que str2\n");
} else {
printf("str1 et str2 sont égaux\n");
}

return 0;
} */
