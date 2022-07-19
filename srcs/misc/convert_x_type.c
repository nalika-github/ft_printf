/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_x_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:52:14 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/15 16:52:15 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*convert_x_type(unsigned int arg, char type)
{
	char	*arg_str;
	int		i;

	if (!arg)
		return (ft_strdup("0"));
	arg_str = ft_digi_to_hex(arg);
	if (!arg_str)
		return (0);
	if (type == 'X')
	{
		i = 0;
		while (arg_str[i])
		{
			arg_str[i] = ft_toupper((int)arg_str[i]);
			i++;
		}
	}
	return (arg_str);
}
