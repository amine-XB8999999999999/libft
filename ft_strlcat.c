/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:13:57 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/24 15:22:11 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	if (dst[i] == 0)
		return (NULL);
	i = ft_strlen(dst);
	k = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	if (size != 0)
	{
		while (src[j] != '\0' && size - 1 > i)
		{
			dst[i++] = src[j++];
		}
	}
	dst[i] = '\0';
	return (k);
}
