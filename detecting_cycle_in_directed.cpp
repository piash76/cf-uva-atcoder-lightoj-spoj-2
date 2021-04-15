



ll df2(ll id)  ///cycle finding for directed graph
{
    A[id]= 1;
    vis[id]= 1;
    for ( auto i:adj[id]){
        if(A[i] == 1)
            return 1;
        if(vis[i] == 0)
            if(df2(i))
                return 1;
    }
    A[id]= 0;
    return 0;
}

