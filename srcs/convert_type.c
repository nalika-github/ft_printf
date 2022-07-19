/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:07:42 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/13 20:07:43 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*convert_type(va_list arg, char type)
{
	char	*arg_str;

	if (type == '%')
		arg_str = convert_c_type('%');
	else if (type == 'c')
		arg_str = convert_c_type(va_arg(arg, int));
	else if (type == 's')
		arg_str = convert_s_type(va_arg(arg, char *));
	else if (type == 'd' || type == 'i')
		arg_str = convert_d_type(va_arg(arg, int));
	else if (type == 'u')
		arg_str = convert_u_type(va_arg(arg, unsigned int));
	else if (type == 'p')
		arg_str = convert_p_type(va_arg(arg, size_t));
	else if (type == 'x' || type == 'X')
		arg_str = convert_x_type(va_arg(arg, size_t), type);
	return (arg_str);
}
