/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:31:49 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:38:35 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (*(s + (++i)))
		if (*(s + i) == (unsigned char) c)
			return ((char *)s + i);
	if (*(s + i) == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int main() {
char chaine[100];
char caractere;
char *pointeur;

printf("Entrez une chaine de caractères: ");
gets(chaine);

printf("Entrez le caract
ère à rechercher dans la chaine: ");
scanf("%c", &caractere);

pointeur = strchr(chaine, caractere);

if (pointeur == NULL) {
printf("Le caractère n'a pas été t
rouvé dans la chaine.\n");
} else {
printf("Le caractère a été trouvé dans la ch
aine à la position: %d\n", pointeur - chaine + 1);
}

return 0; */
