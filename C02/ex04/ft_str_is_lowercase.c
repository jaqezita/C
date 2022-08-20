/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 05:01:52 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/20 05:01:52 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que retorne 1 se a string passada como parâmetro só contiver caracteres alfabéticos minúsculos e retorne 0 se a função contiver outros tipos de caracteres.
// Deverá retornar 1 se a str for uma string vazia. 

//#include<stdio.h>

int	ft_str_is_lowercasse(char *str);

int	ft_str_is_lowercasse(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'a' || str[index] > 'z')
			return (0);
	str++;
	}
	return (1);
}

/*
int	main(void)
{

	printf ("%d\n", ft_str_is_lowercasse("str"));		//1

	printf ("%d\n", ft_str_is_lowercasse(""));			//1

	printf ("%d\n", ft_str_is_lowercasse("ADSS"));		//0

	printf ("%d\n", ft_str_is_lowercasse("TSusA"));		//0

	printf ("%d\n", ft_str_is_lowercasse("s1tr"));		//0	

	printf ("%d\n", ft_str_is_lowercasse("str1"));		//0

	printf ("%d\n", ft_str_is_lowercasse("1str"));		//0

	printf ("%d\n", ft_str_is_lowercasse("24511"));		//0

	printf ("%d\n", ft_str_is_lowercasse(" "));			//0

	printf ("%d\n", ft_str_is_lowercasse("!@da14"));	//0
	return (0);
}
*/