/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 23:38:27 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/25 10:41:47 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_range(int min, int max)
{
	int *result;
	int i;

	i = 0;
	if (!(result = (int*)malloc(sizeof(*result) * (max - min))))
		return (0);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (*result);
}

int		main(void)
{
	int min;
	int max;

	min = -2147483648;
	max = 2147483647;
	printf("%d\n", ft_range(min, max));
	return (0);
}
