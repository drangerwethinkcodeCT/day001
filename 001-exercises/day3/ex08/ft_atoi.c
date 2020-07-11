/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 15:35:16 by dranger           #+#    #+#             */
/*   Updated: 2020/07/11 15:57:25 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
int ft_atoi(char *str)
{

    int number = 0; 
  	int count = 0;

	while(str[count] != '\0')
	{
		number = number * 10 + str[count] - '0';
		count ++;
	}	  
    
    return number; 
} 
  
