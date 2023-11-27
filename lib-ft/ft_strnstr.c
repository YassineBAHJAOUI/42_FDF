/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:54:36 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 14:55:31 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = -1;
	if (!len)
		return (NULL);
	while (++i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (!little[j + 1])
				return ((char *)(big + i));
			j++;
		}
	}
	return (NULL);
}
/*include <stdio.h>
#include <string.h>

int main() {
char s1[100];
char s2[100];
int n;

printf("Entrez la première chaîne de caractères: ");
scanf("%s", s1);

printf("Entrez la deuxième chaîne de caractères: ");
scanf("%s", s2);

printf("Entrez la taille maximale pour la recherche: ");
scanf("%d", &n);

char *result = strnstr(s1, s2, n);
if (result == NULL) {
printf("La sous-chaîne n'a pas été trouvée dans la chaîne principale\n");
} else {
printf("La sous-chaîne a été trouvée à l'index %ld\n", result - s1);
}

return 0;
} */
