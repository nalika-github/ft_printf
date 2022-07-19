/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:32:16 by ptungbun          #+#    #+#             */
/*   Updated: 2022/03/20 21:32:18 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*container;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		container = (*lst)->next;
		ft_lstdelone (*lst, del);
		*lst = container;
	}
}
