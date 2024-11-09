/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:06:33 by mel-abde          #+#    #+#             */
/*   Updated: 2024/10/27 17:47:38 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *pt;
	size_t				i;

	pt = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (pt[i] == (unsigned char) c)
		{
			return ((unsigned char *) (s + i));
			//return (&pt[i]);
		}
		i++;
	}
	return (NULL);
}
int main()
{
	/*const char *s = "hello world!";
	printf("%s\n", ft_memchr(s, 'o', 18));
	printf("%s", memchr(s, 'o', 18));
	//const int t[] = {1, 2, 3, 4, 5};	
	*/
	const int t[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(t) / sizeof(t[0]);
    int search_value = 6;

    // Utilisation de ft_memchr pour trouver la valeur
    int *int_result = ft_memchr(t, search_value, n * sizeof(int));
    if (int_result)
        printf("ft_memchr (int): valeur trouvée: %d\n", *int_result);
    else
        printf("ft_memchr (int): valeur non trouvée\n");

    return 0;
}