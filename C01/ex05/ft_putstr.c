/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:25:17 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/16 15:25:17 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma que mostre um a um os caracteres de uma string na ela. 

#include<unistd.h>

void	ft_putstr(char*str);

void	ft_putstr(char*str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}


/*
int	main(void)
{
	char	*str;

	str = "Blackpink";
	ft_putstr(str);
	write (1, "\n", 1);
	return (0);
}
*/