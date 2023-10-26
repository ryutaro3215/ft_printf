/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:32:44 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/26 19:38:52 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int chr)
{
	write(1, &chr, 1);
	return (1);
}

int	ft_print_string(char *str)
{
	int	str_len;

	str_len = ft_strlen(str);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, str, str_len);
	return (str_len);
}
