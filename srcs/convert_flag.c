/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:07:07 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/13 20:07:08 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	flagtype_check(char type, char flag)
{
	int		i;
	char	*type_str;

	i = 0;
	type_str = "di";
	while (type_str[i])
	{
		if (flag == '+' && type == type_str[i])
			return (1);
		if (flag == ' ' && type == type_str[i])
			return (2);
		i++;
	}
	if (flag == '#' && type == 'x')
		return (3);
	if (flag == '#' && type == 'X')
		return (4);
	type_str = "csd";
	return (0);
}

static void	handle_x(char **arg_str)
{
	if ((*arg_str)[0] != '0')
		(*arg_str) = ft_strcat(ft_strdup("0x"), (*arg_str));
	else if ((*arg_str)[0] == '0')
		(*arg_str) = ft_strdup("0");
}

static void	handle_bigx(char **arg_str)
{
	if ((*arg_str)[0] != '0')
		(*arg_str) = ft_strcat(ft_strdup("0X"), (*arg_str));
	else if ((*arg_str)[0] == '0')
		(*arg_str) = ft_strdup("0");
}

char	*convert_flag(char *arg_str, t_format format)
{
	char	*buf;

	if (ft_atoi(arg_str) < 0)
		return (arg_str);
	if (flagtype_check(format.type, format.flag))
	{
		buf = arg_str;
		if (flagtype_check(format.type, format.flag) == 1)
			if (ft_atoi(arg_str) >= 0)
				arg_str = ft_strcat(ft_strdup("+"), arg_str);
		if (flagtype_check(format.type, format.flag) == 2)
			arg_str = ft_strcat(ft_strdup(" "), arg_str);
		if (flagtype_check(format.type, format.flag) == 3)
			handle_x(&arg_str);
		if (flagtype_check(format.type, format.flag) == 4)
			handle_bigx(&arg_str);
		free(buf);
	}
	return (arg_str);
}
