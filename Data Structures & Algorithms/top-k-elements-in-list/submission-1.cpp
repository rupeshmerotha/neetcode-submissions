class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        priority_queue<pair<int, int>,
              vector<pair<int, int>>,
               greater<pair<int, int>>> pq;
        for(int i=0;i<n;i++) m[nums[i]]++;
        for(auto &p:m){
            int val=p.first;
            int freq=p.second;
            pq.push({freq,val});
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
