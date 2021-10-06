// Problem Link: http://codeforces.com/contest/20/problem/C

#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000000000000
#define int long long
vector<vector<pair<int, int> > > graph;
vector<int> dist, path, par;
vector<bool> vis;
set<pair<int, int> > pq;
 
void dijkstraAlgo(int src, int n) {
 
	dist[src] = 0;
	par[src] = -1;
 
	for(int i = 1; i <= n; i++) {
 
		pq.insert({dist[i], i});
	}
 
	while(!pq.empty()) {
 
		int d = pq.begin()->first;
		int u = pq.begin()->second;
		pq.erase(pq.begin());
 
		for(auto neighbour: graph[u]) {
 
			if(dist[u] + neighbour.second < dist[neighbour.first]) {
 
				pq.erase(pq.find({dist[neighbour.first], neighbour.first}));
				dist[neighbour.first] = dist[u] + neighbour.second;
				pq.insert({dist[neighbour.first], neighbour.first});
				par[neighbour.first] = u;
			}
		}
	}
}
 
void display(int src, int n) {
 
	for(int i = n; i != -1; i = par[i]) path.push_back(i);
 
	if(dist[n] == INF) {
		cout << -1 << endl; return;
	}
 
	for(int i = path.size()-1; i >= 0; i--) {
		cout << path[i] << " ";
	}
}
 
signed main() {
 
	int n, m;
	cin >> n >> m;
 
	graph.resize(n+1);
	dist.resize(n+1);
	fill(dist.begin(), dist.end(), INF);
	vis.resize(n+1);
	fill(vis.begin(), vis.end(), false);
	par.resize(n+1);
	fill(par.begin(), par.end(), -1);
 
	while(m--) {
 
		int u, v, w;
		cin >> u >> v >> w;
 
		graph[u].push_back({v, w});
		graph[v].push_back({u, w});
	}
 
	dijkstraAlgo(1, n);
 
	display(1, n);
 
	return 0;
}
