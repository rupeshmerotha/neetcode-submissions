class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++) m[nums[i]]++;
        for(auto p:m){
            pq.push({p.second,p.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int>v;
        while(!pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
