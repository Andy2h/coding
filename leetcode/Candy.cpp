class Solution {
public:
    int candy(vector<int> &ratings) {
        if(ratings.empty()) return 0;
        if(ratings.size() == 1) return 1;
        
        vector<int> l(ratings.size(), 1);
        vector<int> r(ratings.size(), 1);
        
        for(int i = 1; i < ratings.size(); i++){
            if(ratings[i] > ratings[i-1]){
                l[i] = l[i-1]+1;
            }
        }
        
        for(int i = ratings.size()-2; i >= 0; i--){
            if(ratings[i] > ratings[i+1]){
                r[i] = r[i+1]+1;
            }
        }
        
        int sum = 0;
        for(int i = 0; i < l.size(); i++){
            sum += max(l[i], r[i]);
        }
        
        return sum;
    }
};
