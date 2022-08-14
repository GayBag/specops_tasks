# include <iostream>


bool is_polindrome (std::string);

int main ()
{
	std::string str= "A man, a plan, a canal: Panama";

	if (is_polindrome(str))
	{
	
		std::cout<<"Is polindrome"<<std::endl;
	
	
	}
	else
	{
	
	
		std::cout<<"Isn't polindrome"<<std::endl;
	

	}

 
	return 0;


}

bool is_polindrome (std::string str)
{
   
   std::string str1;
   for (int i=0;i<str.size();++i)
   {
   
   
	   if (str[i]>=0&&str[i]<=9||str[i]<='z'&&str[i]>='a')

	   {
	   
	        str1+=str[i];
	   }	   
		if(str[i]>='A'&&str[i]<='Z')
		   
		{
		   
		   
			   str1+=str[i]+32;
	       
		
		}
	   
	   
	   }
   
   
 
   std::cout<<str1<<std::endl;
   
   for(int i=0,j=str1.size()-1;i<j;++i,--j)
 {
    if (str1[i]!=str1[j])
    {
     
    return false;

    }
 }
 return true;

}

