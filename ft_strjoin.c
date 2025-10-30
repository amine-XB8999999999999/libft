/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:08:27 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/27 11:01:14 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t  j;	

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);

	if (s2 != NULL)
		j = ft_strlen(s2);
	s = (char *)malloc(ft_strlen(s1) + j + 1);
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (s1 != NULL)
	{
		while (s1[j] != 0 )
			s[i++] = s1[j++];
	}
	j = 0;
	if (s2 != NULL)
	{
		while (s2[j] != 0 )
			s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
