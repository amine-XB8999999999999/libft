/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstmap_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:20:55 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/29 10:38:56 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*N_lst;
	t_list  *ptr;

	if (!lst || !f || !del)
		return (NULL);
	N_list = ft_lstnew(f(lst->content));
	if (!N_lst)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		ptr = ft_lstnew(f(lst->content));
		if (!ptr)
		{
			ft_lstclear(N_list, del);
			return (NULL);
		}
		ft_lstadd_back(&N_list,ptr);
		lst = lst->next;
	}
	return (N_list);
}
