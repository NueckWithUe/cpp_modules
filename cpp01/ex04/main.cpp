#include <iostream>
#include <fstream>

void replace(std::string &line, char **argv)
{
	int found = (int)line.find(argv[2], 0);
	char s[1024];
	std::string new_line;
	std::string argv2 = argv[2];
	std::string argv3 = argv[3];

	line.copy(s, found, 0);
	new_line.append(s);
	new_line.append(argv3);
	new_line.append(line, found + argv2.length(), 1024);
	line = new_line;
}

int	main(int argc, char **argv)
{
	std::ifstream inputfile;
	std::string lines;
	std::string name = argv[1];
	name = name.append(".replace");

	if (argc != 4)
	{
		std::cout << "Error.\nWrong Arguments.\nArguments must be: <filename> <string_to_find> <string_to_replace>" << std::endl;
		return (1);
	}
	inputfile.open(argv[1], std::ifstream::in);
	if (!inputfile.is_open())
	{
		std::cout << "Error.\nFile cannot be opened." << std::endl;
		return (1);
	}
	std::ofstream outfile(name);
	while (std::getline(inputfile, lines))
	{
		while ((int)lines.find(argv[2], 0) >= 0)
			replace(lines, argv);
		outfile << lines << std::endl;
	}
	inputfile.close();
	outfile.close();
	return (0);
}