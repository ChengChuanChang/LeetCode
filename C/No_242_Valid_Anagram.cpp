class Solution {
public:
    bool isAnagram(string s, string t) {
        //cout<<s.length()<<endl;
        if(s.length() != t.length())
        {
            return false;
        }
        
        int findNum = t.length();
        
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<findNum;j++)
            {
                printf("aa\n");
                if(s[i]==t[j])
                {
                    findNum--;
                    t[j] = t[findNum];
                    break;
                }
                if(j==findNum-1)
                {
                    return false;
                }
            }
        }
        
        return true;;
    }
};