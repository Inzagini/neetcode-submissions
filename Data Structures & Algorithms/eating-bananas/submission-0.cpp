class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int max = std::ranges::max(piles);
        int res{max};
       int min{1};

       while (min <= max){
            int k = (max + min) / 2;
            long long totalTime{};

            for (double pile : piles){
                totalTime += ceil(pile / k);

                if (totalTime > h)
                    break;
            }

            if (totalTime > h){
                min = k + 1;
            }
            else {
                res = k;
                max = k - 1;
            }
       }

      return res; 
    }
};
