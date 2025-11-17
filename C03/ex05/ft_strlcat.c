/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:52:15 by ahamouda          #+#    #+#             */
/*   Updated: 2025/09/12 00:11:14 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	i;

	dl = 0;
	sl = 0;
	while (dest[dl])
		dl++;
	while (src[sl])
		sl++;
	if (dl >= size)
		return (size + sl);
	i = 0;
	while (src[i] && dl + i < size - 1)
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	return (dl + sl);
}
/*
int	main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "World!";
	int size;
	int result;

	size = 15;
	result = ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%d\n", result);
	return (0);
}*/
