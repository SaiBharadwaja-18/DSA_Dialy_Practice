// 151. Reverse Words in a String

// LeetCode Problem: https://leetcode.com/problems/reverse-words-in-a-string/

//SoLUTION

class Solution {
public:
    string reverseWords(string s) {
        int t=s.size()-1;
        int n=t;
        string words;
        
        while(t>=0){
            if(t==n){
                while(s[t]==' '){
                    t--;
                }
                }
            if(s[t]==' ' && t==0){break;}
            if(t!=0 && s[t]==' ' && s[t-1]==' '){t--;}
            else{
                words+=s[t];
                t--;
            }

        }
       int i=0;
       int len=words.size();
       while(i<len){
        int j=i;
        while(j<len && words[j]!=' ')j++;
        int left = i, right = j - 1;
        while (left < right) {
            swap(words[left], words[right]);
            left++;
            right--;
        }
        i = j + 1;
       }
        return words;
    }
};