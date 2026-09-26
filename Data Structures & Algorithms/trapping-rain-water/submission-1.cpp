class Solution {
public:
    int trap(vector<int>& h) {
        int t=0;
        vector<int> pmax(h.size());
        vector<int> smax(h.size());
        pmax[0]=h[0];
        smax[h.size()-1]=h[h.size()-1];
        for(int i=1;i<h.size();i++){
            pmax[i]=max(h[i],pmax[i-1]);
        }
        for(int i=h.size()-2;i>=0;i--){
            smax[i]=max(h[i],smax[i+1]);
        }
        for(int i=1;i<h.size();i++){
            t=min(pmax[i],smax[i])+t-h[i];
        }
        
        
        
        return t;
        
    }
};
