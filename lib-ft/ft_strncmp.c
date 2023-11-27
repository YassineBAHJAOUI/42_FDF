/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:16:13 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 14:53:12 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* include <stdio.h>
#include <string.h>

int main() {
char str1[100], str2[100];
int num, result;

printf("Enter the first string: ");
scanf("%s", str1);
printf("Enter the second string: ");
scanf("%s", str2);
printf("Enter the number of characters to compare: ");
scanf("%d", &num);

result = strncmp(str1, str2, num);

if (result == 0) {
printf("The first %d characters of both strings are equal.\n", num);
} else {
printf("The first %d characters of both strings are not equal.\n", num);
}

return 0;
} */
