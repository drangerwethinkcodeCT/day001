/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:24:09 by dranger           #+#    #+#             */
/*   Updated: 2020/07/15 14:41:52 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_str_is_lowercase(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			return 1;
		} else {
			return 0;
		}
		i++;	
	}	
	return 1;
}

