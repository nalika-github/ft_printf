/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_format_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:40:31 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/11 16:40:33 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	get_flag(char c)
{
	int		i;
	char	*flag_str;

	i = 0;
	flag_str = "+# ";
	while (flag_str[i])
	{
		if (c == flag_str[i])
			return (c);
		i++;
	}
	return (0);
}
