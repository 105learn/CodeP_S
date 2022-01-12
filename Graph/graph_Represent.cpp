/**#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N=1e5+2,MOD=1e9+7;

/**int main()
{
    int n,m;
    cin>>n>>m;
    vvi adjm(n+1,vi(n+1,0));
    rep(i,0,m)
    {
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }

    rep(i,1,n+1)
    {
        rep(j,1,n+1)
        {
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
vi adj[N];
signed main()
{
    int n,m;
    cin>>n>>m;
    rep(i,0,m)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<" The adjacency list of given graph is :"<<endl;
    rep(i,1,n+1)
    {
        cout<<i<<"-> ";
        for(int x: adj[i]){
            cout<<x<<" ";
        }cout<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;

const int N=1e5+2;
vi adj[N];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<" the given adjacency list is : "<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<"-> ";
        for(int x:adj[i]){
            cout<<x<<" ";
        }cout<<endl;
    }cout<<endl;
    return 0;
}
// Graph Representation by using Adjacency Matrix
#include <bits/stdc++.h>
using namespace std;

const int N=1e3;

int graph[N][N];

int main()
{
    int n,m;
    cin>> n >> m;
    for(int i=0;i<m;i++){
        int v1,v2,wt;
        cin>>v1>>v2>>wt;

        graph[v1][v2]=wt;
        graph[v2][v1]=wt;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<graph[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
    return 0;
}*/

//Graph Representation by using Adjacency List

#include<bits/stdc++.h>
using namespace std;

const int N=1e3;

vector< pair<int,int> >graph[N];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        graph[v1].push_back({v2,wt});
        graph[v2].push_back({v1,wt});
    }
    //printing the Adjacency List : 
    for(int i=0;i<n;i++){
        cout<<i<<"--> ";
        for(pair<int,int> child: graph[i]){
            cout<<child.first<<" ";
        }cout<<endl;
    }cout<<endl;
    
    return 0;
}