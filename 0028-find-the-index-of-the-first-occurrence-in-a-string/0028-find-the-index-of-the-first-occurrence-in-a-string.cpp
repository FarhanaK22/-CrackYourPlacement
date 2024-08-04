class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int m = haystack.size();
        if(n > m )
        return -1;

        int index =0; 
        int k =0;
        while(k< m)
        { int i = k;
            while(haystack[i] == needle[index] && index <n)
            {index++;
            i++;}
            if(index == n)
            return i - n ;
           
            index = 0;
            k++;
        }
        return -1;

    }
};