/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:14:51 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/28 17:31:12 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*nd;

	if (!content)
		return (NULL);
	nd = (t_list *)malloc(sizeof(t_list));
	if (!nd)
		return (NULL);
	nd -> content = content;
	nd -> next = NULL;
	return (nd);
}
