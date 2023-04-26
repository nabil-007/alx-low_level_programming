#include "main.h"

/**
 * subs_match - check if a substring after wildcard matches s1
 * @s1: string
 * @s2: string
 * @after_wldcd: placeholder
 * Return: 1 if matched, 0 if not
 */

int subs_match(char *s1, char *s2, char *after_wldcd)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (subs_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (subs_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (subs_match(s1 + 1, s2 + 1, after_wldcd));
	else
		return (subs_match(s1 + 1, after_wldcd, after_wldcd));
}

/**
 * wildcmp - compare  string to wildcard
 * @s1: string
 * @s2: string
 * Return: 1 if matched, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (subs_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
