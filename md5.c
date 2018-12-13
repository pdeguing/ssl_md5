/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 13:25:42 by pdeguing          #+#    #+#             */
/*   Updated: 2018/09/24 15:24:10 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"

	// 512 bits = 64 * char
	// 64 bits = 8 * char
	// so we went to pad the message so it is 8 char less that 64 char in 
	// the last 512 bock, that is last block in char should be 56 char long
	// let's write a function that take a string and displays its characters
	// in binary with an index to visualize what is happening
	// We need to add binary to ft_printf first
	//
	// We need to parse the input into 512-blocks

unsigned char	*md5(char *input)
{
	unsigned char	*digest;

	digest = (unsigned char *)malloc(sizeof(unsigned char));
}
