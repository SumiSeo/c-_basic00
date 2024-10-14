#include <iostream>

// create a function to switch lower case to upper case

std::string to_upper(char *s)
{
	std::cout << s << std ::endl;
	return (s);
};

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		for (int i = 1; i < argc; i++)
			// std::cout << "hello world" << std::endl;
			to_upper(argv[i]);

	return (0);
}