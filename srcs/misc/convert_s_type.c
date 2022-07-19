/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:52:11 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/14 12:52:13 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*convert_s_type(char *arg)
{
	char	*arg_str;

	if (!arg)
	{
		arg_str = ft_strdup("(null)");
		return (arg_str);
	}
	if (arg)
		arg_str = ft_strcat(ft_calloc(1, ft_strlen(arg) + 1), arg);
	else
		arg_str = ft_calloc(1, 1);
	return (arg_str);
}
