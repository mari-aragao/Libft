/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:19:35 by maragao           #+#    #+#             */
/*   Updated: 2022/05/19 17:17:10 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <strings.h>

int	main(void)
{
	puts ("--- ft_isalpha ----\n");
	printf("'a' = %d\n", ft_isalpha('a'));
	printf("'$' = %d\n", ft_isalpha('$'));
	puts("");
	
	puts ("--- ft_isdigit ----\n");
	printf("'1' = %d\n", ft_isdigit('1'));
	printf("'a' = %d\n", ft_isdigit('a'));
	puts("");

	puts ("--- ft_isalnum----\n");
	printf("'1' = %d\n", ft_isalnum('1'));
	printf("'a' = %d\n", ft_isalnum('a'));	
	printf("'$' = %d\n", ft_isalnum('$'));
	puts("");
	
	puts ("--- ft_isascii----\n");
	printf("'a' = %d\n", ft_isascii('a'));
	printf("200 = %d\n", ft_isascii(200));
	puts("");

	puts ("--- ft_isprint ----\n");
	printf("32 = %d\n", ft_isprint(32));
	printf("'$' = %d\n", ft_isprint('$'));
	puts("");

	puts ("--- ft_strlen ----\n");
	printf("testando9 = %zu\n", ft_strlen("testando9"));
	puts("");

	puts ("--- ft_memset ----\n");
	char	str[] = "testando";
	char    ftstr[] = "testando";
	memset(str, '$', 3);
	printf("memset: %s\n", str);
	ft_memset(ftstr, '$', 3);
	printf("ft_memset: %s\n", ftstr);
	puts("");
	
	puts ("--- ft_bzero ----\n");
	bzero ((str + 3), 5);
	printf("bzero: %s\n", str);
	ft_bzero ((ftstr + 3), 5);
	printf("ft_bzero: %s\n", ftstr);	
	puts("");

	puts ("--- ft_memcpy ----\n");
	char	str1[] = "testando";
	char    ftstr1[] = "testando";
	memcpy(str1, "TESTANDO", 4);
	printf("memcpy: %s\n", str1);
	ft_memcpy(ftstr1, "TESTANDO", 4);
	printf("ft_memcpy: %s\n", ftstr1);
	puts("");
	
	puts ("--- ft_memmove ----\n");
	char	str2[25] = "testando";
	char    ftstr2[25] = "testando";
	memmove(str2 + 3, str2, 8);
	printf("memcpy: %s\n", str2);
	ft_memmove(ftstr2 + 3, ftstr2, 8);
	printf("ft_memcpy: %s\n", ftstr2);
	puts("");

	puts ("--- ft_strlcat ----\n");
	char	str3[20]	= "testando ";
	char    ft_str3[20]  = "testando ";
	printf("strcat: size => %lu / %s\n", (strlcat(str3, "strcat", 20)), str3);
	printf("ft_strcat: size => %zu / %s\n", (ft_strlcat(ft_str3, "ft_strcat", 20)), ft_str3);
	puts("");

	puts ("--- ft_strlcpy ----\n");
	char	str4[20]	= "testando ";
	char    ft_str4[20]  = "testando ";
	printf("strcpy: size => %lu / %s\n", (strlcpy(str4, "strcpy", 0)), str4);
	printf("ft_strcpy: size => %zu / %s\n", (ft_strlcpy(ft_str4, "ft_strcpy", 0)), ft_str4);
	puts("");

	puts ("--- ft_split ---\n");
	printf("%s\n", ft_split(" ola ola ola ", ' ')[0]);
	return (0);
}
