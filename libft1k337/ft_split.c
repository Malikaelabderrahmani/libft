/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:26:32 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 10:36:41 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_helper1(const char *s, char c)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (s[i] != '\0')
		nb = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			nb++;
		i++;
	}
	return (nb);
}

static char	*ft_helper2(const char *s, int len, int i)
{
	char	*ch;
	int		j;

	j = 0;
	ch = malloc(len + 1);
	if (ch == NULL)
		return (NULL);
	while (j < len)
	{
		ch[j] = s[i + j];
		j++;
	}
	ch[j] = '\0';
	return (ch);
}

static int	ft_helper3(const char *s, char c, int i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static char	**ft_helper4(char **ch, int h)
{
	while (h > 0)
		free(ch[--h]);
	free(ch);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		k;
	int		h;
	char	**ch;

	if (!s)
		return (NULL);
	h = ((i = 0), 0);
	ch = malloc((ft_helper1(s, c) + 1) * sizeof(char *));
	if (ch == NULL)
		return (NULL);
	i = ft_helper3(s, c, i);
	while (s[i] && h < ft_helper1(s, c))
	{
		k = 0;
		i = ft_helper3(s, c, i);
		while (s[i + k] && s[i + k] != c)
			k++;
		ch[h++] = ft_helper2(s, k, i);
		if (ch[h - 1] == NULL)
			return (ft_helper4(ch, h - 1));
		i += k;
	}
	ch[h] = NULL;
	return (ch);
}
