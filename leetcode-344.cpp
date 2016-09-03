#include<iostream> 

class Solution 
{
public:
    std::string reverseString(std::string s) 
	{
		int length = s.length();
		
		std::string res = "";
		
		for(int i = length-1; i >= 0; --i)
		{
			res += s[i];
		}
		        
        return res;
    }
};


int main()
{
	std::string s = "hello!";
	Solution ss;
	
	std::cout << ss.reverseString(s) << std::endl;
	
	return 0;
} 
