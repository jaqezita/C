/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 05:21:15 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/22 05:21:15 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que deixe todas as letras em minúsculo.

#include<stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
		index++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "Blackpink";
	char	str1[] = "aAs74Ds";
	char	str2[] = "47dsaAs";
	char	str3[] = "USAHUHSUHSAU";
	char	str4[] = "hoJEe";
	char	str5[] = "15868451";
	char	str6[] = "";

	ft_strlowcase(str);
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	ft_strlowcase(str4);
	ft_strlowcase(str5);
	ft_strlowcase(str6);
	
	printf ("%s\n", str);
	printf ("%s\n", str1);
	printf ("%s\n", str2);
	printf ("%s\n", str3);
	printf ("%s\n", str4);
	printf ("%s\n", str5);
	printf ("%s\n", str6);
	return (0);
}
*/