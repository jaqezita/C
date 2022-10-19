/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:06:01 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/18 14:06:01 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	dest[255];
	
	printf("%s\n", ft_strcpy(dest, "Blackpink In Your Area"));

	printf("%s\n", ft_strcpy(dest, "Jaqueline"));

	printf("%s\n", ft_strcpy(dest, "1 2 3 4 5 6 7 8 9"));

	printf("%s\n", ft_strcpy(dest, "Hell0, W0lrd!"));

	printf("%s\n", ft_strcpy(dest, ""));
	
	printf("%s\n", ft_strcpy(dest, "   "));
	return (0);
}
*/