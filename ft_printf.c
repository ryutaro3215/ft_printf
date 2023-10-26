/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryutaro320515 <ryutaro320515@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:04:47 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/26 13:29:48 by ryutaro3205      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	judge_identifer(va_list argument, char word);

int	ft_printf(const char *str, ...)
{
	va_list	argument;
	int		i;
	int		print_len;

	va_start(argument, str);
	i = 0;
	print_len = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			print_len += ft_print_char(str[i]);
		else
		{
			print_len += judge_identifer(argument, str[i + 1]);
			i++;
		}
		i++;
	}
	return (print_len);
}

int	judge_identifer(va_list argument, char word)
{
	int	print_len;

	print_len = 0;
	if (word == 'c')
		print_len = ft_print_char(va_arg(argument, int));
	else if (word == 's')
		print_len = ft_print_string(va_arg(argument, char *));
	else if (word == 'p')
		print_len = ft_print_low_hex(va_arg(argument, unsigned int));
	else if (word == 'd' || word == 'i')
		print_len = ft_print_signed_int(va_arg(argument, int));
	else if (word == 'u')
		print_len = ft_print_unsigned_int(va_arg(argument, unsigned int));
	else if (word == 'x')
		print_len = ft_print_low_hex(va_arg(argument, unsigned int));
	else if (word == 'X')
		print_len = ft_print_upp_hex(va_arg(argument, unsigned int));
	else if (word == '%')
		print_len = ft_print_char('%');
	return (print_len);
}

int	main(void)
{
	ft_printf("myprintf\nreturn : %d\n", INT_MIN);
	printf("return value : %d\n",
		printf("original\nreturn : %i\nreturn : %s\nreturn : %c\nreturn : %u\nreturn : %x\nreturn : %X\n", 1234, "string", 'c', UINT_MAX, 1234, 1234));
}
