// ahmet 50, ahmet 50, osman 50
#include "libft.h"
int main()
{
	const char *str1 = "ahmet 50,suat 20 ,vedat 21";
	const char *str2 = "umut 23 suat 19 bilim 20 vedat 21";
	int i;
	i = 0;
	char *str1_new;
	// ahmet50suat20vedat21
	// umut23suat19bilim20vedat21
	while (str1[i] != '\0')
	{
		if(ft_isalnum(str1[i]))
		{
			str1_new[i] = str1[i];
		}
		i++;
	}
	printf("%s", str1_new);
}