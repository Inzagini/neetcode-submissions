class Solution {
public:
    bool isPalindrome(string s) {

        string sstriped = "";

        for (auto &c : s){
            if (isalnum(c))
                sstriped += tolower(c);
        }

       int i = 0, j = sstriped.size() - 1;
        cout << sstriped;
       while (i <= j) {

            if (sstriped[i] != sstriped[j])
                return false;
            i++; j--;
       }

       return true;
    }
};
