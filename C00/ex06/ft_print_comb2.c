/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:48:34 by ahamouda          #+#    #+#             */
/*   Updated: 2025/09/12 00:14:42 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	st;
	int	nd;

	st = 0;
	while (st <= 98)
	{
		nd = st + 1;
		while (nd <= 99)
		{
			ft_putchar(st / 10 + '0');
			ft_putchar(st % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nd / 10 + '0');
			ft_putchar(nd % 10 + '0');
			if (st < 98)
				write(1, ", ", 2);
			nd++;
		}
		st++;
	}
}
