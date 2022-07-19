/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:44:08 by ptungbun          #+#    #+#             */
/*   Updated: 2022/06/07 15:44:10 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stddef.h>
# include <stdarg.h>

typedef struct s_format
{
	int		zero;
	int		alignment;
	char	flag;
	int		width;
	int		precision;
	int		length;
	char	type;
}	t_format;

int			ft_printf(const char *str, ...);
int			read_arg(const char **str, va_list arg);
int			print_format(va_list arg, t_format format);

char		*ft_digi_to_hex(size_t arg);
char		*convert_type(va_list arg, char type);
char		*convert_flag(char *arg_str, t_format format);
char		*convert_c_type(char arg);
char		*convert_d_type(int arg);
char		*convert_p_type(size_t arg);
char		*convert_s_type(char *arg);
char		*convert_u_type(unsigned int arg);
char		*convert_x_type(unsigned int arg, char type);
char		*ft_digi_to_hex(size_t arg);
char		get_flag(char c);
char		get_type(char c);

t_format	set_zero_format(void);
t_format	set_format(t_format format, const char **str);

#endif
