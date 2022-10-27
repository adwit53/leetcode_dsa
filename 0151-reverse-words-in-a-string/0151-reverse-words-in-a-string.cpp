class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string word;
        s=s+" ";
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!=' ')
            {
                word=word+s.at(i);
            }
            else
            {
                if(word=="")
                {
                    continue;
                }
                ans=word+" "+ans;
                word="";
            }
        }
        ans=ans.substr(0,ans.length()-1);
        return ans;
    }
};