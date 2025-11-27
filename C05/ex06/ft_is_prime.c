/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:29:12 by ahamouda          #+#    #+#             */
/*   Updated: 2025/09/12 00:09:59 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(6));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(37));
	printf("%d\n", ft_is_prime(2));
}*/
