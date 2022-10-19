/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:34:50 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/18 16:34:50 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
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
    char	destiny[255];
	
	printf("%s\n", ft_strncpy(destiny, "Blackpink In Your Area", 9));

	printf("%s\n", ft_strncpy(destiny, "Jaqueline", 5));

	printf("%s\n", ft_strncpy(destiny, "1 2 3 4 5 6 7 8 9", 3));

	printf("%s\n", ft_strncpy(destiny, "Hell0, W0lrd!", 7));

	printf("%s\n", ft_strncpy(destiny, "", 2));
	
	printf("%s\n", ft_strncpy(destiny, "   ", 1));
    return (0);
}
*/