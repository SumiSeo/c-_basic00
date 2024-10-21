#include <cstring>
#include <iostream>

void	to_upper(char *s)
{
	int i = 0;
	while (s[i])
	{
		std::cout << (char)toupper(s[i]);
		i++;
	}
};

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		for (int i = 1; i < argc; i++)
		{
			to_upper(argv[i]);
			if (i < argc - 1)
				std::cout << " ";
		}

	return (0);
}