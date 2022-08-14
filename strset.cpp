# include <iostream>
char * mstrset (char * str,char ch);

int main ()
{
	char line [30];
	char ch;
	std::cin>>line>>ch;

	std::cout << mstrset (line,ch)<<std::endl;


	return 0;
}

char * mstrset (char *str,char ch)
{
	int i=0;
	while (str[i])
	{
		str[i]=ch;
	++i;
	}


return str;
}

