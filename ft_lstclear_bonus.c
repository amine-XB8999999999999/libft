/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:22:52 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/29 10:23:58 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list  *curnt;
	t_list	*nxt;

	if (!lst || !del)
		return ;
	curnt = *lst;
	while (curnt != NULL)
	{
		nxt = curnt->next;
		del(curnt->content);
		free(curnt);
		curnt = nxt;
	}
	*lst  = NULL;
}
