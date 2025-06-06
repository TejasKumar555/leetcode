class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {

        queue<pair<string,int>>q;
        unordered_set<string>st(wordList.begin(),wordList.end());
        st.erase(beginWord);
        q.push({beginWord,1});
    

        while(!q.empty())
        {
            string word=q.front().first;
            int steps=q.front().second;
            q.pop();

            if(word==endWord)return steps;
            for(int i=0;i<word.size();i++)
            {
                char ori=word[i];
                for(char ch='a';ch<='z';ch++)
                {
                    word[i]=ch;
                    if(st.find(word)!=st.end())
                    {
                        q.push({word,steps+1});
                        st.erase(word);
                    }
                }
                word[i]=ori;
            }
        }


        return 0;


        
    }
};