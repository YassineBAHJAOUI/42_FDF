/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:59:05 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/02/07 14:56:04 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int						i;
	int						n;
	unsigned long long int	result;

	i = 0;
	n = 1;
	result = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
		if (result > 9223372036854775807 && n == -1)
			return (0);
		if (result > 9223372036854775807)
			return (-1);
	}
	return ((int)result * n);
}
/* #include <stdio.h>
#include <stdlib.h>

int main() {
char str[] = "12345";
int num = atoi(str);
printf("The converted integer is %d\n", num);
return 0;
} */
