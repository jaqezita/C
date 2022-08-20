/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 04:48:10 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/20 04:48:10 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que retorne 1 se a string passada como parâmetro só contiver números e retorne 0 se a função contiver outros tipos de caracteres. 
// Deverá retornar 1 se for uma string for vazia.

//#include<stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		str++;
	}
	return (1);
}

/*
int	main(void)
{

	printf ("%d\n", ft_str_is_numeric("str"));		//0

	printf ("%d\n", ft_str_is_numeric(""));			//1

	printf ("%d\n", ft_str_is_numeric("ADSS"));		//0

	printf ("%d\n", ft_str_is_numeric("TSusA"));		//0

	printf ("%d\n", ft_str_is_numeric("s1tr"));		//0	

	printf ("%d\n", ft_str_is_numeric("str1"));		//0

	printf ("%d\n", ft_str_is_numeric("1str"));		//0

	printf ("%d\n", ft_str_is_numeric("24511"));		//1

	printf ("%d\n", ft_str_is_numeric(" "));		//0

	printf ("%d\n", ft_str_is_numeric("!@da14"));		//0
	return (0);
}
*/
