/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda.student@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:23:07 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/28 23:39:50 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;
	int	*ptr;

	if (min >= max)
		return (0);
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (0);
	ptr = arr;
	i = min;
	while (i < max)
	{
		*ptr = i;
		ptr++;
		i++;
	}
	return (arr);
}
