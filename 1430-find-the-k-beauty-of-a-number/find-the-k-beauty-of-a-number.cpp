class Solution {
public:
    int divisorSubstrings(int num, int k) {


        int counter=0;
        string str=to_string(num);
        int n=str.length();
        int i=0,j=0;


        while(j<n)
        {
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                string sub=str.substr(i,k);
                int val=stoi(sub);
                if(val!=0&&num%val==0)
                counter++;
                i++;
                j++;


            }


        }



        return counter;

        
    }
};