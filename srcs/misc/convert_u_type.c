/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:03:59 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/15 13:04:00 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*convert_u_type(unsigned int arg)
{
	char			*arg_str;
	unsigned int	arg_buf;
	int				i;

	i = 0;
	arg_buf = arg;
	if (arg_buf == 0)
		i = 1;
	while (arg_buf > 0)
	{
		arg_buf = arg_buf / 10;
		i++;
	}
	arg_str = ft_calloc(1, i + 1);
	if (!arg_str)
		return (NULL);
	i--;
	while (i >= 0)
	{
		arg_str[i] = (arg % 10) + '0';
		arg = arg / 10;
		i--;
	}
	return (arg_str);
}
