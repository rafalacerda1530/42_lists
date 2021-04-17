/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:12:47 by rarodrig          #+#    #+#             */
/*   Updated: 2021/04/12 23:30:22 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int a;
    int b;

    a = 0;
    if (*to_find == '\0')
        return (str);
    while (str[a] != '\0')
    {
        b = 0;
        while(str[a + b] == to_find[b])
        {
            if(to_find[b + 1] == '\0')
                return (str + a);
            b++;
        }
        a++;
    }
    return (0);
}

int main()
{
	char a[] = "deu certo isso";
	char c[] = "certo";
	
	ft_strstr(a, c);
	return(0);
}
