# include <iostream>

int main ()
{
   const int size=10;
   int arr[size]={1,5,7,6,8,9,2,4,3,10};
   int newarr[size]={};
  
   for (int i=1;i<size;++i)
   {
      
    newarr[i]=arr[i]*arr[i];
   
   }

  for (int i=0;i<size;++i)
  {  
     for (int j=0;j<size;++j)
	  if (newarr[i]<newarr[j])
	  {
	    int tmp=newarr[i];
	    newarr[i]=newarr[j];
	    newarr[j]=tmp;

	  
	  
	  }
  
  }

   
  for (int i=0;i<size;++i)
  {
  
   std::cout<<newarr[i]<< " ";
  
  }
  
  
  std::cout<<std::endl;
}
