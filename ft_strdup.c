/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:12:57 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/30 13:31:26 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;

	if (!s)
		return (NULL);
	p = (char *) malloc(ft_strlen(s) + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
