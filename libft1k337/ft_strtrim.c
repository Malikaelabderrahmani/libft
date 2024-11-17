/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:49:35 by mel-abde          #+#    #+#             */
/*   Updated: 2024/11/17 19:22:02 by mel-abde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_helper1(const char *s1, const char *set)
{
	size_t	len;
	int		flag;
	size_t	i;
	size_t	j;

	flag = 1;
	len = 0;
	i = 0;
	while (s1[i] && flag == 1)
	{
		j = 0;
		while (set[j] && set[j] != s1[i])
			j++;
		if (set[j] == '\0')
			flag = 0;
		else
			len++;
		i++;
	}
	return (len);
}

static size_t	ft_helper2(const char *s1, const char *set)
{
	size_t	len;
	int		flag;
	size_t	i;
	size_t	j;

	flag = 1;
	len = 0;
	i = ft_strlen(s1) - 1;
	if ((int)i == -1)
		i = 0;
	while (s1[i] && flag == 1)
	{
		j = 0;
		while (set[j] && set[j] != s1[i])
			j++;
		if (set[j] == '\0')
			flag = 0;
		else
			len++;
		i--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	l;
	char	*ch;
	size_t	k;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	l = ft_strlen(s1);
	len = ft_helper1(s1, set);
	k = len;
	len = len + ft_helper2(s1, set);
	if (len > l)
		ch = malloc(1);
	else
	{
		ch = malloc(l - len + 1);
		if (ch == NULL)
			return (NULL);
		while (i < l - len)
			ch[i++] = s1[k++];
	}
	ch[i] = '\0';
	return (ch);
}
// int main ()
// {
// 	char *ch = "hellohhhhhhhhhh";
// 	printf("%s", ft_strtrim(ch, "hel"));
// }
