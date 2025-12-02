#include <string>
#include <iostream>
#include <fstream> 


int main(int argc,  char **argv)
{
	if(argc != 4)
	{
		std::cout<< "Error: Incorrect arguments."<<std::endl;
		return 1;
	}
	std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
	if(s1 == "")
		return 1;
	int s1_length = s1.length();
	int s2_length = s2.length();
	std::ifstream infile(filename.c_str());
	if (!infile.is_open())
    {
    	std::cout << "Error: The file could not be opened " << filename << std::endl;
		return 1;
	}   
	std::string outname = filename + ".replace";
    std::ofstream outfile(outname.c_str());
	if (!outfile.is_open())
    {
        std::cout << "Error: The output file could not be created." << std::endl;
        infile.close(); 
        return 1;
    }
	std::string line;
	while(std::getline(infile,line))
	{
		size_t pos = 0;
		while(true)
		{
			size_t found_pos = line.find(s1,pos);
			if(found_pos == std::string::npos)
				break;
			line.erase(found_pos,s1_length);
			line.insert(found_pos,s2);
			pos = found_pos + s2_length;
		}
		outfile<<line<<std::endl;
	}
}