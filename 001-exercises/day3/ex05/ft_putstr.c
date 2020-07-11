/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 08:45:01 by dranger           #+#    #+#             */
/*   Updated: 2020/07/11 08:46:40 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
	{	
		ft_putchar(*str);
		str++;
	}
}
