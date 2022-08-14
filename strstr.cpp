# include <iostream>
# include <vector>
int mstrstr(std::string,std::string);
int main ()
{

 std::string h="hello";
 std::string n="ll";

 std::cout<<mstrstr (h,n)<<std::endl;;

 return 0;
}






int mstrstr(std::string haystack, std::string needle) {
        int index=-1;
        
        for (int i=0;i+needle.size()-1<haystack.size();++i)
        {
            int count=0;
            for (int j=0;j<needle.size();++j)
            {
                if (haystack[i+j]==needle[j])
                {
                    
                    count++;
                    
                }
            }
                if (count==needle.size())
                {
                    
                    index=i;
                 break;   
                }
                
        
            
    
        
        }
    return index;
    }

