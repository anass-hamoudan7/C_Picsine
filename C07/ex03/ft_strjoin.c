/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda.student@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:16:48 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/28 23:40:19 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	org_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*joined_str(int size, char *str, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*str;
	char	*nul;

	if (size == 0)
	{
		nul = malloc(1);
		if (!nul)
			return (0);
		*nul = '\0';
		return (nul);
	}
	len = org_len(size, strs, sep);
	str = malloc(len + 1);
	if (!str)
		return (0);
	joined_str(size, str, strs, sep);
	return (str);
}
