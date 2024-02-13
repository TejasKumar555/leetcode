class Solution {
public:
    string firstPalindrome(vector<string>& words) {


        int i=0;


        for(i=0;i<words.size();i++)
        {
            int t=palindrome(words[i]);
            if(t==1)
            return words[i];

        }


        return "";
        
    }


    int palindrome(string &str)
    {
        int i,j;

        i=0;
        j=str.length()-1;
        int flag=1;
        while(i<=j)
        {
            if(str[i]==str[j])
            {
                i++;
                j--;
            }
            else
            {
                flag=0;
                break;

            }

           
        }


        if(flag==0)
           return 0;
           


           return 1;
    }
};