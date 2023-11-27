/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:06:09 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:03:14 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		j;
	char	*str;
	int		i;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof (char) * ((ft_strlen(s1)) + ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	j = i;
	i = -1;
	while (s2[++i])
		str[j++] = s2[i];
	str[j] = '\0';
	return (str);
}
/* int main(int argc, char** argv) {

if (argc != 3) {
printf("Usage: %s str1 str2\n", argv[0]);
return 1;
}

char* str1 = argv[1];
char* str2 = argv[2];

char* result = ft_strjoin(str1, str2);
if (result == NULL) {
    printf("Erreur d'allocation de mémoire\n");
    return 1;
}

printf("Resultat: %s\n", result);
free(result);

return 0;
} */
