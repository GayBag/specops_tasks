# include <iostream>
#include <vector>
int sumOfUnique (std::vector <int>& nums);

int main ()
{
   std::vector<int> vec={1,1,3,4};

  std::cout<<sumOfUnique (vec)<<std::endl;


}
int sumOfUnique(std::vector<int>& nums) {


        int sum=0;
        for (int i=0;i<nums.size();++i)
        {
             int count=0;
            for (int j=0;j<nums.size();++j)
            {

                if (nums[i]==nums[j]&&i!=j)
                {

                    count++;

                }
            }
                if (count==0)
                {

                sum+=nums[i];

                }





        }
        return sum;
     }
