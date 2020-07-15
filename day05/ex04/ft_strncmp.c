/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:16:05 by dranger           #+#    #+#             */
/*   Updated: 2020/07/15 14:21:32 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    i = 0;
    while (*s1 == *s2 && i < n)
    {
        s1++;
        s2++;
        i++;
    }
    if (*s1 == *s2)
        return 0;
    if(*s1 > *s2)
        return *s1 - *s2;
    if(*s1 < *s2)
        return -(*s2 - *s1);
    return -1;
}
