/*
void frequencyCount(vector<int>& arr,int N,int P){
    //taken unordered map
    unordered_map<int,int>mp;

    //marking freq of each and every ele if present
    for(int i=0;i<N;i++){
        mp[arr[i]]++;
    }
    
    for(int i=0;i<N;i++){
        if(mp.find(i+1)!=mp.end()){
            arr[i]=mp[i+1];//if prrsent in map,assigning
            freq,else arr[i]=0;
        }
        else
        {
            arr[i]=0;
        }
    }

}

*/















