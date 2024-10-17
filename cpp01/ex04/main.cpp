#include <iostream>
#include <fstream>

void replace(std::string &line, char **argv, int pos)
{
	int found = (int)line.find(argv[2], pos);
	std::string start = line.substr(pos, found);
	std::string to_find = argv[2];
	std::string replace = argv[3];
	std::string finish = line.substr(found + to_find.length(), replace.length() + start.length());
	std::string new_line;

	new_line.append(start);
	new_line.append(replace);
	new_line.append(finish);
	// char s[1024];
	// std::string new_line;
	// std::string argv2 = argv[2];
	// std::string argv3 = argv[3];

	// line.copy(s, found, pos);
	// new_line.append(s);
	// new_line.append(argv3);
	// new_line.append(line, found + argv2.length(), 1024);
	line = new_line;
}

int	main(int argc, char **argv)
{
	std::ifstream inputfile(argv[1]);
	std::string lines;
	std::string next_line;
	std::string name = argv[1];
	std::string to_find = argv[2];
	std::string to_replace = argv[3];
	int curr_pos = 0;
	name = name.append(".replace");

	if (argc != 4)
	{
		std::cout << "Error.\nWrong Arguments.\nArguments must be: <filename> <string_to_find> <string_to_replace>" << std::endl;
		return (1);
	}
	if (!inputfile.is_open())
	{
		std::cout << "Error.\nFile cannot be opened." << std::endl;
		return (1);
	}
	std::ofstream outfile(name);
	while (std::getline(inputfile, lines))
	{
		while ((int)lines.find(argv[2], curr_pos) >= 0 && to_find != to_replace)
		{
			replace(lines, argv, curr_pos);
			curr_pos += (to_replace.length() + to_find.length());
		}
		curr_pos = 0;
		outfile << lines;
		if (!inputfile.eof())
			outfile << std::endl;
		lines.clear();
	}
	inputfile.close();
	outfile.close();
	return (0);
}