/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:50:39 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/24 21:40:20 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(dest = (char*)malloc(sizeof(*src) * (i + 1))))
		return (0);
	dest = ft_strcpy(dest, src);
	free(dest);
	return (dest);
}

int		main(void)
{
	char str[] = "hello";

	printf("%s\n", ft_strdup(str));
	return (0);
}
