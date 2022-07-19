/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:42:00 by ptungbun          #+#    #+#             */
/*   Updated: 2022/02/27 14:05:54 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_bzero(void *b, size_t len)
{
	size_t			i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char *)b;
	while (i < len)
	{
		buf[i] = '\0';
		i++;
	}
	b = buf;
	return (b);
}
