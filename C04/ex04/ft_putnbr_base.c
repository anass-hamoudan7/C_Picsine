/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:40:22 by ahamouda          #+#    #+#             */
/*   Updated: 2025/08/25 09:40:39 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_len(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	if (!check_base(base) || base_len(base) < 2)
		return ;
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_len(base))
		ft_putnbr_base(nb / base_len(base), base);
	ft_putchar(base[nb % base_len(base)]);
}
/*
int	main(void)
{
	ft_putnbr_base(255, "0123456789");	// 255
	ft_putchar('\n');

	ft_putnbr_base(255, "01");	// 11111111
	ft_putchar('\n');

	ft_putnbr_base(255, "0123456789ABCDEF");	// FF
	ft_putchar('\n');

	ft_putnbr_base(123, "poneyvif");	// ofe
	ft_putchar('\n');

	ft_putnbr_base(-42, "0123456789");	// -42
	ft_putchar('\n');

	ft_putnbr_base(-42, "01");	// -101010
	ft_putchar('\n');

	return (0);
}*/
