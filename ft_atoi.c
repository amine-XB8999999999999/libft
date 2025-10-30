/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:38:57 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/30 11:38:24 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned long	n;
	size_t	i;
	int	sin;
	int	j;

	i = 0;
	sin = 1;
	n = 0;
	while (nptr[i] <= 32)
		i++;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if(nptr[i] == 45)
			sin = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		j = nptr[i] - 48;
		n = j + (n * 10);
		if (n > 9223372036854775807 && sin == 1)
			return (-1);
		if (n > 9223372036854775807 && sin == -1)
			return (0);
		i++;
	}
	return ((int)(n * sin));
}
