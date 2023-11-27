/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:12:01 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 15:00:26 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*x;
	size_t	tsize;

	tsize = count * size;
	x = malloc(tsize);
	if (x == NULL)
		return (NULL);
	ft_bzero(x, tsize);
	return (x);
}
/* include <stdio.h>
#include <stdlib.h>

int main() {
int n, m;
int *ptr;

printf("Entrer le nombre d'éléments dans le tableau: ");
scanf("%d", &n);

ptr = (int*)ft_calloc(n, sizeof(int));

if (ptr == NULL) {
    printf("Allocation de mémoire échouée.\n");
    exit(0);
}

printf("Entrer les éléments du tableau:\n");
for (int i = 0; i < n; i++) {
    scanf("%d", ptr + i);
}

printf("Le tableau est: ");
for (int i = 0; i < n; i++) {
    printf("%d ", *(ptr + i));
}

free(ptr);
return 0;
} */
