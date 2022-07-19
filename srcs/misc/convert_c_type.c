/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_c_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:47:20 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/14 12:47:27 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*convert_c_type(char arg)
{
	char	*arg_str;

	arg_str = ft_calloc(1, 2);
	arg_str[0] = arg;
	return (arg_str);
}
