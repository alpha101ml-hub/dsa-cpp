class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;

        for(int i =0; i<height.size();i++){
            for(int j=i+1; j<height.size();j++){
                int w = j-i;
                int ht = min(height[i], height[j]);            
                int currWater= w * ht;    
                maxWater = max(maxWater, currWater);
            }
        }
        return maxWater;
    }
};

// The above code will give tle time limit exceeded error because of the nested loop. We can optimize it using two pointer approach.

class Solution {
public:
    int maxArea(vector<int>& height) { // O(n)
        int maxWater = 0; // ans
        int lp = 0, rp = height.size() - 1;
        while(lp < rp){
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currWater = w * ht;
            maxWater = max(maxWater, currWater);

            height[lp] < height[rp] ? lp++: rp--;

        } 
        return maxWater;
    }
};