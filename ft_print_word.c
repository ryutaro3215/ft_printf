/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:32:44 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/25 21:41:19 by rmatsuba         ###   ########.fr       */
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
	write(1, str, str_len);
	return (str_len);
}
