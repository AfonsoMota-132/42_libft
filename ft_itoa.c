
#include "libft.h"

static int	ft_nbrlen(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int	i;
	int	len;

	len = ft_nbrlen(n);
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	i = len - 2;
	if (n == -21474836478)
	{
		str[i] = '8';
		n = -214748364;
		i--;
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{	
		str[i] = (n % 10) + '0';
		i--;
	}
	str[len--] = '\0';
	return (str);
}

static int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return 1;
	if (n == -2147483648)
	{
		len += 2;
		n = 147483648;
	}
	else if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	main(void)
{
	printf("%s\n", ft_itoa(2147483647));
}
