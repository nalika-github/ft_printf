/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_format.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:07:37 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/24 12:07:39 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	get_type(char c)
{
	int		i;
	char	*type_str;

	i = 0;
	type_str = "cspdiuxX%";
	while (type_str[i])
	{
		if (c == type_str[i])
			return (c);
		i++;
	}
	return (0);
}

t_format	set_format(t_format format, const char **str)
{
	while (!get_type(**str))
	{
		if (get_flag(**str))
			format.flag = get_flag(**str);
	}
	if (get_type(**str))
		format.type = get_type(**str);
	return (format);
}

t_format	set_zero_format(void)
{
	t_format	format;

	format.flag = 0;
	format.type = 0;
	return (format);
}
