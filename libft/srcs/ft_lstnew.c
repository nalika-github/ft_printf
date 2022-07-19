/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:28:22 by ptungbun          #+#    #+#             */
/*   Updated: 2022/03/18 18:28:29 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*room;

	room = (t_list *)malloc(sizeof(t_list));
	if (!room)
		return (0);
	room->next = 0;
	room->content = content;
	return (room);
}
