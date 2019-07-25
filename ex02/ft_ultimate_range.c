/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 10:43:42 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/25 19:14:00 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *result;
	int i;
	int j;

	i = 0;
	j = min;
	if (max - min > 2147483647)
		return (-1);
	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	if (!(result = (int*)malloc(sizeof(**range) * (max - min))))
		return (-1);
	while (i < (max - min))
	{
		result[i] = j;
		i++;
		j++;
	}
	*range = result;
	return (max - min);
}

#include <stdio.h>

int		main(void)
{
	int *range = 0;
	printf("%d\n", ft_ultimate_range(&range, 5, 10));
	return (0);	
}
