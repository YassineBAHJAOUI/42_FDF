/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:12:57 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:40:54 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	i = -1;
	if ((!dstsize && !dst) || !dstsize)
		return (slen);
	dlen = ft_strlen(dst);
	if (dlen > dstsize)
		return (slen + dstsize);
	while ((++i)[src] && i + dlen < dstsize - 1)
		(i + dlen)[dst] = i[src];
	(i + dlen)[dst] = '\0';
	return (dlen + slen);
}
/* #include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
char destination[MAX_LENGTH] = "Bonjour";
char source[] = " tout le monde!";
int n = 10; // nombre de caractères à copier à partir de la source

// utilisation de strlcat
strlcat(destination, source, n);
printf("Chaîne concaténée: %s\n", destination);

return 0;
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
char destination[MAX_LENGTH] = "Bonjour";
char source[] = " tout le monde!";
int n = 10; // nombre de caractères à copier à partir de la source

// utilisation de strlcat
strlcat(destination, source, n);
printf("Chaîne concaténée: %s\n", destination);

return 0;
}*/
