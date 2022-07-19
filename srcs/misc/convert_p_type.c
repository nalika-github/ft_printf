/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:20:38 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/15 13:20:40 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*ft_digi_to_hex(size_t arg)
{
	char	*hex_base;
	char	*arg_str;
	int		i;
	size_t	arg_buf;

	i = 0;
	if (arg == 0)
		i = 1;
	arg_buf = arg;
	while (arg_buf > 0)
	{
		arg_buf = arg_buf / 16;
		i++;
	}
	hex_base = "0123456789abcdef";
	arg_str = ft_calloc(1, i + 1);
	i--;
	while (arg > 0)
	{
		arg_str[i] = hex_base[arg % 16];
		arg = arg / 16;
		i--;
	}
	return (arg_str);
}

char	*convert_p_type(size_t arg)
{
	char	*arg_str;
	char	*hex;

	if (!arg)
		return (ft_strdup("(nil)"));
	arg_str = ft_strdup("0x");
	if (!arg_str)
		return (NULL);
	hex = ft_digi_to_hex(arg);
	arg_str = ft_strcat(arg_str, hex);
	free(hex);
	if (!arg_str)
		return (NULL);
	return (arg_str);
}
