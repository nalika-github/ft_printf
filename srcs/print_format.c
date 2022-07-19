/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:33:30 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/24 12:33:43 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	print_format(va_list arg, t_format format)
{
	static char	*arg_str;
	int			i;

	arg_str = convert_type(arg, format.type);
	arg_str = convert_flag(arg_str, format);
	if (format.type == 'c' && arg_str[0] == '\0')
	{
		ft_putchar_fd('\0', 1);
		free(arg_str);
		return (1);
	}
	ft_putstr_fd(arg_str, 1);
	i = ft_strlen(arg_str);
	free(arg_str);
	return (i);
}
