/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:14:25 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/16 19:42:47 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	p = malloc(i + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*int main() {
    const char *original = "Hello, World!"; // Chaîne d'origine
    char *duplicate = ft_strdup(original); // Appel à strdup

    // Vérification de l'allocation
    if (duplicate == NULL) {
        fprintf(stderr, "Échec de l'allocation mémoire.\n");
        return 1;
    }

    // Affichage des chaînes
    printf("Chaîne d'origine : %s\n", original);
    printf("Chaîne dupliquée : %s\n", duplicate);

    // Libération de la mémoire
    free(duplicate);
    
    return 0;
}*/