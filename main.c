#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("=== TEST FT_TOUPPER ===\n");
	printf("ft_toupper('a') = %c\n", ft_toupper('a'));
	printf("ft_toupper('Z') = %c\n", ft_toupper('Z'));
	printf("ft_toupper('1') = %c\n\n", ft_toupper('1'));

	printf("=== TEST FT_TOLOWER ===\n");
	printf("ft_tolower('A') = %c\n", ft_tolower('A'));
	printf("ft_tolower('z') = %c\n", ft_tolower('z'));
	printf("ft_tolower('!') = %c\n\n", ft_tolower('!'));

	printf("=== TEST FT_ISALPHA ===\n");
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
	printf("ft_isalpha('z') = %d\n", ft_isalpha('z'));
	printf("ft_isalpha('5') = %d\n", ft_isalpha('5'));
	printf("ft_isalpha('-') = %d\n\n", ft_isalpha('-'));

	printf("=== TEST FT_ISDIGIT ===\n");
    printf("ft_isdigit('0') = %d\n", ft_isdigit('0')); // 1
	printf("ft_isdigit('9') = %d\n", ft_isdigit('9')); // 1
	printf("ft_isdigit('A') = %d\n", ft_isdigit('A')); // 0
	printf("ft_isdigit('-') = %d\n\n", ft_isdigit('-')); // 0

	printf("=== TEST FT_ISALNUM ===\n");
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A')); // 1
	printf("ft_isalnum('z') = %d\n", ft_isalnum('z')); // 1
	printf("ft_isalnum('5') = %d\n", ft_isalnum('5')); // 1
	printf("ft_isalnum('-') = %d\n", ft_isalnum('-')); // 0
	printf("ft_isalnum(' ') = %d\n\n", ft_isalnum(' ')); // 0

	printf("=== TEST FT_ISASCII ===\n");
    printf("ft_isascii(65) = %d\n", ft_isascii(65));   // 1 ('A')
	printf("ft_isascii(127) = %d\n", ft_isascii(127)); // 1 (DEL)
	printf("ft_isascii(-1) = %d\n", ft_isascii(-1));   // 0
	printf("ft_isascii(200) = %d\n\n", ft_isascii(200)); // 0

	printf("=== TEST FT_ISPRINT ===\n");
    printf("ft_isprint('A') = %d\n", ft_isprint('A'));   // 1
	printf("ft_isprint(' ') = %d\n", ft_isprint(' '));   // 1
	printf("ft_isprint('~') = %d\n", ft_isprint('~'));   // 1
	printf("ft_isprint('\\n') = %d\n", ft_isprint('\n')); // 0
	printf("ft_isprint(127) = %d\n\n", ft_isprint(127));   // 0

	printf("=== TEST FT_STRLEN ===\n");
    printf("ft_strlen(\"Hello\") = %zu\n", ft_strlen("Hello")); // 5
	printf("ft_strlen(\"\") = %zu\n", ft_strlen(""));           // 0
	printf("ft_strlen(\"42\") = %zu\n", ft_strlen("42"));       // 2
	printf("ft_strlen(\"libft\") = %zu\n\n", ft_strlen("libft")); // 5

	printf("=== TEST FT_MEMSET ===\n");
    char str_00[10] = "abcdefghi";

	printf("Avant memset : %s\n", str_00);
	ft_memset(str_00 + 3, '*', 3);
	printf("Après memset : %s\n", str_00);

	// Test pour remplir tout à 0
	ft_memset(str_00, 0, 10);
	printf("Après memset à 0 : \"%s\"\n\n", str_00);

	printf("=== TEST FT_BZERO ===\n");
    char str_01[10] = "123456789";

	printf("Avant ft_bzero : \"%s\"\n", str_01);
	ft_bzero(str_01 + 3, 4);
	printf("Après ft_bzero : ");
	for (int i = 0; i < 10; i++)
	{
		if (str_01[i] == 0)
			printf("\\0");
		else
			printf("%c", str_01[i]);
	}
	printf("\n\n");

	printf("=== TEST FT_MEMCPY ===\n");
    char src_02[] = "Hello";
	char dest_00[10];

	ft_memcpy(dest_00, src_02, 6); // copie aussi le '\0'
	printf("Résultat : %s\n", dest_00);

	// Test avec n = 0
	ft_memcpy(dest_00, "Test", 0);
	printf("Aucun changement (n=0) : %s\n\n", dest_00);

	printf("=== TEST FT_MEMMOVE ===\n");
    char str_03[20] = "HelloWorld";

	// Cas normal
	ft_memmove(str_03 + 5, str_03, 5);
	printf("Résultat (chevauchement) : %s\n", str_03);

	// Cas sans chevauchement
	char src_04[] = "12345";
	char dest_01[10];
	ft_memmove(dest_01, src_04, 6);
	printf("Copie simple : %s\n\n", dest_01);

	printf("=== TEST FT_STRLCPY ===\n");
    char src_05[] = "Bonjour";
	char dest_05[10];
	size_t ret;

	ret = ft_strlcpy(dest_05, src_05, sizeof(dest_05));
	printf("Dest : \"%s\" | Retour : %zu\n", dest_05, ret);

	char small_dest[4];
	ret = ft_strlcpy(small_dest, src_05, sizeof(small_dest));
	printf("Tronqué : \"%s\" | Retour : %zu\n\n", small_dest, ret);


	printf("=== TEST FT_STRLCAT ===\n");
    char dest_06[15] = "Hello";
	const char *src_06 = " World!";
	size_t ret_06;

	ret_06 = ft_strlcat(dest_06, src_06, sizeof(dest_06));
	printf("Résultat : \"%s\" | Retour : %zu\n", dest_06, ret_06);

	char small_dest_06[8] = "Hello";
	ret_06 = ft_strlcat(small_dest_06, src_06, sizeof(small_dest_06));
	printf("Tronqué : \"%s\" | Retour : %zu\n\n", small_dest_06, ret_06);

	printf("=== TEST FT_STRCHR ===\n");
    char str_07[] = "Hello World!";

	printf("%s\n", ft_strchr(str_07, 'W'));   // → "World!"
	printf("%s\n\n", ft_strchr(str_07, 'l'));   // → "llo World!"

	printf("=== TEST FT_STRNCMP ===\n");
    printf("%d\n", ft_strncmp("Hello", "Hello", 5)); // → 0
	printf("%d\n", ft_strncmp("Hello", "Hellz", 5)); // → négatif
	printf("%d\n", ft_strncmp("Hello", "Hellz", 4)); // → 0
	printf("%d\n", ft_strncmp("abc", "abd", 3));     // → négatif
	printf("%d\n\n", ft_strncmp("abcd", "abc", 4));    // → positif

	return (0);
}
