/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:03:50 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/16 16:03:50 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que contenha o número de caracteres em uma string de caracteres que retorne ao número encontrado. 

#include<unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{	
	int	index;

	index = 0;
	while(str[index] != '\0')
	{
		index++;
	}
	return (index);
}


void	ft_recursive_write_int(int index)  // função para converter e escrever inteiros com write
{
	char	position;

	if (index / 10 == 0) //ponto de parada da recursividade 
	{
		position = (index % 10) + '0';
		write (1, &position, 1);
		return ;
	}
	ft_recursive_write_int(index / 10);
	position = (index % 10) + '0';
	write (1, &position, 1);
}

/*
int	main(void)
{
	char	*str;

	str = "BLACKPINK";

	ft_recursive_write_int(ft_strlen(str));
	write (1, "\n", 1);
	return (0);

}
*/