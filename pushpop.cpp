# include <iostream>
# include <vector>
std::vector<std::string> buildArray (std::vector <int>&,int);

int main ()
{ 

	std::vector <int> target={1,3};
	int n=3;

	std::vector<std::string> tar=buildArray(target,n);
   for (int i=0;i<tar.size();++i)
   {
   
    std::cout<<tar[i]<< " ";
   
   }

   std::cout<<tar.size()<<std::endl;
   return 0;


}
std::vector<std::string> buildArray(std::vector<int>& target, int n) {

     std::vector <std::string> vec;
     int i=0;
     int j=1;
        do
       {
    if (target[i]==j)
    {
        vec.push_back("Push");
     ++j;
    }

    else if (target[i]!=j)
    {

        vec.push_back ("Push");
        vec.push_back ("Pop");
        ++j;
     i-=1;
    }

          ++i;


       }while (i<target.size() &&j<=n);



    return vec;
    }
