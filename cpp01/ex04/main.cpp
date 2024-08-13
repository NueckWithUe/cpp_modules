#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream inputfile;
	std::string lines;

	if (argc != 4)
	{
		std::cout << "Error.\nWrong Arguments.\nArguments must be: <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	inputfile.open(argv[1], std::ifstream::in);
	if (!inputfile.is_open())
	{
		std::cout << "Error.\nFile cannot be opened." << std::endl;
		return (1);
	}
	while (std::getline(inputfile, lines))
		std::cout << lines << std::endl;
	inputfile.close();
	return (0);
}