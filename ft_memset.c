/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:56:51 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/27 18:37:21 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = s;
	while (i < n)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
int main ()
{
	int	i = 15;
	int	*p = &i;

	ft_memset(p,1,4);
	printf("%d",i);
	ft_memset(p,15,1);
        printf("%d",i);

}
