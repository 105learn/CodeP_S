// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e3;
// int adj[N][N];
// bool vis[N][N];
// void dfs(int i,int j){
//     cout<<adj[i][j]<<endl;
//     vis[i][j]=true;
    
//     for(int a=i;a<N;a++){
//         for(int b=j;b<N;b++){
//             cout<<adj[i][j]<<" "<<adj[a][b]<<endl;
//             if(vis[a][b]) continue;
//             dfs(a,b);
//         }
//     }
// }

// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<m;i++){
//         int v1,v2;
//         cin>>v1>>v2;
//         adj[v1][v2]=1;
//         adj[v2][v1]=1;
//     }
//     cout<<"DFS of the given graph is : "<<endl;
//     dfs(0,1);
//     //matrix representation of given graph
//     cout<<"The given input of the graph is : "<<endl;
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<n+1;j++){
//             cout<<adj[i][j]<<" ";
//         }cout<<endl;
//     }cout<<endl;

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// const int N=1e5+2;
// vector<int>g[N];

// bool vis[N];

// void dfs(int source){
//     vis[source]=true;
//     for(int child: g[source]){
//         if(vis[child]){
//             continue;
//         }
//         dfs(child);
//     }
// }

// int main()
// {
//     int v,e;
//     cin>>v>>e;
//     for(int i=0;i<e;i++){
//         int v1,v2;
//         cin>>v1>>v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//     int cnt=0;
//     for(int i=0;i<v;i++){
//         if(vis[i])continue;
//         dfs(i);
//         cnt++;
//     }
//     cout<<cnt<<endl;

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;
vector<int>g[N];

bool vis[N];
vector<vector<int>>cc;
vector<int>current_cc;

void dfs(int source){
    vis[source]=true;
    current_cc.push_back(source);
    for(int child: g[source]){
        if(vis[child]){
            continue;
        }
        dfs(child);
    }
}

int main()
{
    int v,e;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int cnt=0;
    for(int i=0;i<v;i++){
        if(vis[i])continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        cnt++;
    }
    cout<<cc.size()<<endl;

    for(auto i : cc){
        for(auto ver : i){
            cout<<ver<<" ";
        }cout<<endl;
    }

    return 0;
}