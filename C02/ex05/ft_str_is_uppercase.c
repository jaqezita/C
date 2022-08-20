/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 08:47:53 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/20 08:47:53 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que retorne 1 se a string passada como parâmetro só contiver caracteres alfabéticos maiúsculos e retorne 0 se a função contiver outros tipos de caracteres.
// Deverá retornar 1 se for uma string vazia.

//#include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'Z')
			return (0);
		str++;
	}
	return (1);
}

/*
int	main(void)
{

	printf ("%d\n", ft_str_is_uppercase("str"));		//0

	printf ("%d\n", ft_str_is_uppercase(""));			//1

	printf ("%d\n", ft_str_is_uppercase("ADSAQ"));		//1

	printf ("%d\n", ft_str_is_uppercase("TSusA"));		//0

	printf ("%d\n", ft_str_is_uppercase("s1tr"));		//0	

	printf ("%d\n", ft_str_is_uppercase("str1"));		//0

	printf ("%d\n", ft_str_is_uppercase("1str"));		//0

	printf ("%d\n", ft_str_is_uppercase("24511"));		//0

	printf ("%d\n", ft_str_is_uppercase(" "));			//0

	printf ("%d\n", ft_str_is_uppercase("!@da14"));		//0
	return (0);
}
*/