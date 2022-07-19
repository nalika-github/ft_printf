/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:49:50 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/05 15:49:52 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list		arg;
	int			i;

	va_start(arg, str);
	i = 0;
	while (*str)
	{
		if (*str == '%')
		{
			i += read_arg(&str, arg);
		}
		else
		{
			ft_putchar_fd(*str, 1);
			i++;
		}
		str++;
	}
	va_end(arg);
	return (i);
}
