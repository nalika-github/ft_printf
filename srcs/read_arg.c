/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:39:13 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/24 12:39:15 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	read_arg(const char **str, va_list arg)
{
	int			i;
	t_format	format;

	(*str)++;
	i = 0;
	format = set_zero_format();
	format = set_format(format, str);
	i = print_format(arg, format);
	return (i);
}
