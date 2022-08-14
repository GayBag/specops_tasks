# include <iostream>

int * bubble_sort (int * ,int);


int main ()
{

	const int size = 10;

	int arr [size]={11,63,47,85,12,49,-10,3,77,54};


        bubble_sort (arr,size);
    
	for (int i=0;i<size;++i)
	{
	
	
		std::cout<<arr[i]<< " ";
	}

  std::cout<<std::endl;
 
  return 0;


}


int * bubble_sort (int * arr,int size)
{

  for (int i=0;i<size-1;++i)
  {
   for (int j=0;j<size-i-1;++j)
   {
   
	   if (arr[j]>arr[j+1])


	   {
	   
	       int tmp=arr[j];
	       arr[j]=arr[j+1];
	       arr[j+1]=tmp;
	   
	   }
   }
  
  }

return arr;
}

