/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_d_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:49:01 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/14 12:49:02 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*convert_d_type(int arg)
{
	char	*arg_str;

	arg_str = ft_itoa(arg);
	if (!arg_str)
		return (NULL);
	return (arg_str);
}
