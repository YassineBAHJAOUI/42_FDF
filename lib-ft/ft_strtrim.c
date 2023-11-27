/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:07:08 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/06 14:59:33 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	int			len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = s1;
	end = s1 + len - 1;
	while (*start && ft_strchr(set, *start))
		start++;
	if (start == s1 + len)
		return (ft_strdup(""));
	while (*end && ft_strchr(set, *end))
		end--;
	return (ft_substr(start, 0, end - start + 1));
}

/* #include <stdio.h>
#include <string.h>

char    *ft_strtrim(char const *s1, char const *set);

int main(void)
{
    char const *s1 = "   Bonjour  \n\t";
    char const *set = " \n\t";
    char *result;

    result = ft_strtrim(s1, set);
    printf("%s\n", result);

    return (0);
} */
