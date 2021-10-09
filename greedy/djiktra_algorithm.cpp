// dijkstras algorithm
// weighted graph gives single source shortest path if reachable
// does not work on negative cycles
// greedy approach



#include <bits/stdc++.h>
using namespace std;

int inf = 1e7;


int main() {
	
	
	int n,m;
	cin>>n>>m;

	vector<int> dist(n+1,inf);
	vector<vector<pair<int,int> > > adj(n+1);
	
	for(int i = 0; i<m; i++){
	    int u,v,w;
	    cin>>u>>v>>w;
	    adj[u].push_back({v,w});
	    adj[v].push_back({u,w});
	}
	
    int source;
    cin>>source;
    dist[source] = 0;
    
    set<pair<int,int> >s;
    s.insert({0,source});
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        for(auto it:adj[x.second]){
            
            if(dist[it.first]>dist[x.second] + it.second){
                s.erase({dist[it.first],it.first});
                dist[it.first] = dist[x.second]+it.second;
                s.insert({dist[it.first],it.first});
            }
            
        }
        
        
    }
    
    for(auto i:dist){
        if(i!=inf)cout<<i<<" ";
        else cout<<-1<<" ";
    }cout<<endl;
    
	return 0;
}