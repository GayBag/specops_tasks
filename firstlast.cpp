# include <iostream>
# include <vector>

std::vector <int> searchrange (std::vector <int>& nums, int target);

int main ()
{
  std::vector <int> vec = {5,7,7,8,8,10};
  int target=8;
  
  std::vector <int> vec1=searchrange (vec,target);

  for (int i=0;i<vec1.size();++i)
  {
  
	  std::cout<<vec1[i]<< " ";
  }

  std::cout<<std::endl;


  return 0;
}
std::vector <int> searchrange (std::vector <int> & nums,int target)
{
  int count=0;
  int index1=0;
  int index2=0;

  std::vector <int> vec;

  for (int i=0;i<nums.size();++i)
  {
   
	  if (nums[i]==target)
	  {
	  
		  count++;
		  index2=i;
	  }
  
  }
  index1=index2-count+1;
  if (count>=1)
  {
  
	  vec={index1,index2};
  }
 if (count<1)
 {
 
	 vec={-1,-1};
 }


 return vec;



}
