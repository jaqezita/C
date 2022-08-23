/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:34:31 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/20 09:34:31 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que deixe todas as letras em maiuscúlo.

//#include<stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
			str[index] -= 32;
		index++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "Blackpink";
	char	str1[] = "as74ds";
	char	str2[] = "47dsaAs";
	char	str3[] = "USAHUHSUHSAU";
	char	str4[] = "hoje";
	char	str5[] = "15868451";
	char	str6[] = "";

	ft_strupcase(str);
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	ft_strupcase(str4);
	ft_strupcase(str5);
	ft_strupcase(str6);
	
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