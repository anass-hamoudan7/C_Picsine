/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:55:14 by ahamouda          #+#    #+#             */
/*   Updated: 2025/09/12 00:12:11 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;
	char			*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (c < 32 || c > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[c / 16]);
			ft_putchar(hex[c % 16]);
		}
		else
			ft_putchar(c);
		i++;
	}
}
