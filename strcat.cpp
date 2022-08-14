# include <iostream>
char * mstrcat (char *s1,char *s2);


int main ()
{
        char str1 [30];
        char str2 [20];
        std::cin>>str1>>str2;

       std::cout<<mstrcat (str1,str2)<<std::endl;


        return 0;

}
char * mstrcat (char *s1,char *s2)
{


        int i=0,j=0;
        while (s1[i])
        {
                                                            

        ++i;
        }

        while (s2[j])
        {
            s1[i+j]=s2[j];
        ++j;
        }
    s1[i+j]='\0';

   return s1;
}

