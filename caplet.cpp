# include <iostream>
# include <fstream>
int main ()
{
	std::string path="2.txt";
	std::ifstream fin;
	fin.open (path);
	
	if (!fin.is_open())
	{
		std::cout<<" The file\" 2.txt\" isn't   open."<<std::endl;
	}
        std::ofstream fout;
        std::string path1="caplet.txt";
        fout.open (path1);
       if (!fout.is_open())
       {
	       std::cout<<" The file \" caplet.txt\" isn't open."<<std::endl;
       
       }

        std::string text;
	while (fin>>text)
	{
	
	 if (text[0]<='z'&&text[0]>='a')
	 {
	 
	 text[0]-=32;
	 }
	 
	fout<<text<<" ";
	 
	
	}
 
      fin.close();
      fout.close(); 
 
	return 0;
}

	

