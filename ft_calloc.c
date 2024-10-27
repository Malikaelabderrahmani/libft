/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:11:43 by mel-abde          #+#    #+#             */
/*   Updated: 2024/10/27 20:12:08 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *p;
	size_t	i;

	i = 0;
	p = malloc(count * size);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < (size * count))
	{
		p[i] = 0;
		i++;
	}
	return (p);	
}


int main() {
    /*size_t count = 10; // Nombre d'éléments
    size_t size = sizeof(int); // Taille d'un entier
    /int *arr = (int *)ft_calloc(count, size); // Appel à my_calloc

    // Vérification de l'allocation
    if (arr == NULL) {
        printf("%s", "Échec de l'allocation mémoire.\n");
        return 1;
    }

    // Affichage des valeurs initialisées
    for (size_t i = 0; i < count; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Libération de la mémoire
    free(arr);
    
    return 0;
    */
    size_t count = 15; // Nombre de caractères (y compris le caractère nul)
    char *str = (char *)ft_calloc(count, sizeof(char)); // Appel à my_calloc

    // Vérification de l'allocation
    if (str == NULL) {
        fprintf(stderr, "Échec de l'allocation mémoire.\n");
        return 1;
    }

    // Exemple de remplissage de la chaîne
    for (size_t i = 0; i < count - 1; i++) {
        str[i] = 'a' + (i % 26); // Remplir avec des lettres de 'a' à 'z'
    }
    str[count - 1] = '\0'; // Terminer la chaîne par un caractère nul

    // Affichage de la chaîne
    printf("Chaîne : %s\n", str);

    // Libération de la mémoire
    free(str);
    
    return 0;
}

