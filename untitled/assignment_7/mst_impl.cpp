//#include "mst_header.h"
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void graph :: create_graph()
//{
//    float w;
//    int a,b,i,j=0;
//    string s,t;
//    cout<<"Enter number of locations : ";
//    cin>>v;
//    cout<<"Enter number of links : ";
//    cin>>e;
//    cout<<"*****************************"<<endl;
//    for (int x =0;x<20;x++){
//        for (int j = 0; j<20;j++){
//            weight[x][j]=0;
//            p[x]=visited[x]=0;
//            d[x]=5000;
//        }
//    }
//
//    for (int x2 = 0; x2<v; x2++){
//        cout<<"Enter location number "<<(x2+1)<<" : ";
//        cin>>names[x2].name;
//    }
//    cout<<"*****************************";
//
//    for (i=0;i<e;i++)
//    {
//        cout<<endl<<"Enter source location : ";
//        cin>>s;
//        for (int l=0;l<v;l++){
//            if(names[l].name==s){
//                a=l;
//            }
//        }
//        cout<<"Enter target location : ";
//        cin>>t;
//        for (int l=0;l<v;l++){
//            if(names[l].name==t){
//                b=l;
//            }
//        }
//        cout<<"Enter distance : ";
//        cin>>w;
//        weight[a][b]=w;
//        edge[i].u=a;
//        edge[i].v=b;
//        edge[i].w=w;
//        weight[b][a]=w;
//        cout<<"*****************************";
//    }
//    cout<<endl<<"Weight matrix : "<<endl;
//    for (int f= 0; f<v;f++)
//        if (f==0)
//            cout<<"   "<<names[f].name;
//        else
//            cout<<" "<<names[f].name;
//    cout<<endl;
//    for (i=0;i<v;i++)
//    {
//        for (j=0;j<v;j++){
//            if (j==0)
//                cout<<" "<<names[i].name;
//            cout<<" "<<weight[i][j];
//        }
//        cout<<endl;
//    }
//}
//
//
//void graph :: sort_graph()
//{
//    int i,j;
//    edge_s temp;
//    for(i=0;i<e-1;i++)
//    {
//        for(j=0;j<e-1;j++)
//        {
//            if(edge[j].w>edge[j+1].w)
//            {
//                temp=edge[j+1];
//                edge[j+1]=edge[j];
//                edge[j]=temp;
//            }
//        }
//    }
//    cout<<"Sorted edge array is : "<<endl;
//    for(int i=0;i<e;i++)
//        cout<<names[edge[i].u].name<<" -> "<<names[edge[i].v].name<<" = "<<edge[i].w<<endl;
//}
//
//void graph::kruskals()
//{
//    int i,j;
//    cout<<"Edge array is : "<<endl;
//    for (i=0;i<e;i++)
//    {
//        cout<<names[edge[i].u].name<<" -> "<<names[edge[i].v].name<<" = "<<edge[i].w<<endl;
//    }
//    cout<<"*****************************"<<endl;
//    sort_graph();
//    cout<<"*****************************"<<endl;
//    edge_s t[15];
//    int conn[10], k, r, p, val, c=0;
//    for (i=0;i<e;i++)
//        conn[i]=0;
//    val=1;
//    c=0;
//    j=0;
//    while(c<e-1 && j<e)
//    {
//        if(conn[edge[j].u]==0 && conn[edge[j].v]==0)
//        {
//            cout<<"Edge : "<<names[edge[j].u].name<<" -> "<<names[edge[j].v].name<<" = "<<edge[j].w<<endl;
//            t[c]=edge[j];
//            conn[edge[j].u]=val;
//            conn[edge[j].v]=val;
//            val++;
//            c++;
//        }
//        else if(conn[edge[j].u]!=conn[edge[j].v])
//        {
//            cout<<"Edge : "<<names[edge[j].u].name<<" -> "<<names[edge[j].v].name<<" = "<<edge[j].w<<endl;
//            if(conn[edge[j].u]!=0 && conn[edge[j].v]!=0)
//            {
//                t[c]=edge[j];
//                if(conn[edge[j].u]<conn[edge[j].v])
//                {
//                    r=conn[edge[j].u];
//                    p=conn[edge[j].v];
//                }
//                else
//                {
//                    r=conn[edge[j].v];
//                    p=conn[edge[j].u];
//                }
//                for(k=0;k<e;k++)
//                {
//                    if(conn[k]==p)
//                        conn[k]=r;
//                }
//                c++;
//            }
//            else if(conn[edge[j].u]==0 && conn[edge[j].v]!=0)
//            {
//                t[c]=edge[j];
//                conn[edge[j].u]=conn[edge[j].v];
//                c++;
//            }
//            else
//            {
//                t[c]=edge[j];
//                conn[edge[j].v]=conn[edge[j].u];
//                c++;
//            }
//        }
//        else
//            cout<<"Edge rejected : "<<names[edge[j].u].name<<" -> "<<names[edge[j].v].name<<" = "<<edge[j].w<<endl;
//        j++;
//    }
//    cout<<"*****************************"<<endl;
//    cout<<"Kruskals MST contains following edges : "<<endl;
//    float cost=0;
//    for(i=0;i<c;i++)
//    {
//        cout<<names[t[i].u].name<<" -> "<<names[t[i].v].name<<" = "<<t[i].w<<endl;
//        cost=cost+t[i].w;
//    }
//    cout<<endl<<"Total Cost of MST is "<<cost;
//}
//
//void graph::prim()
//{
//    int current, totalvisited, mincost,i;
//    current=0; d[current]=0;
//    totalvisited =1;
//    visited[current]=1;
//    cout<<endl<<"Visited distance and path status is : "<< endl<<"i"<<"\t"<<"visited[i]"<<"\t"<<"p[i]"<<"\t"<<"d[i]";
//    for (i=0;i<v;i++)
//    {
//        cout<<endl;
//        cout<<names[i].name<<"\t"<<names[visited[i]].name<<"\t"<<"\t"<<names[p[i]].name<<"\t"<<d[i]<<"\t";
//    }
//    cout<<endl<<"*****************************"<<endl;
//    while(totalvisited!=v)
//    {
//        cout<<endl<<"Total visited = "<<totalvisited;
//        for (i=0;i<v;i++)
//        {
//            if(weight[current][i]!=0)
//                if(visited[i]==0)
//                    if(d[i]>weight[current][i])
//                    {
//                        d[i] = weight[current][i];
//                        p[i] = current;
//                    }
//        }
//        cout<<endl<<"Visited distance and path status is : "<< endl<<"i"<<"\t"<<"visited[i]"<<"\t"<<"p[i]"<<"\t"<<"d[i]";
//        for (i=0;i<v;i++)
//        {
//            cout<<endl;
//            cout<<names[i].name<<"\t"<<names[visited[i]].name<<"\t"<<"\t"<<names[p[i]].name<<"\t"<<d[i]<<"\t";
//        }
//        cout<<endl<<"*****************************"<<endl;
//        mincost= 32767;
//        cout<<endl<<"Finding minimum cost";
//        for (i=0;i<v;i++)
//        {
//            if(visited[i] ==0)
//                if (d[i] <mincost)
//                {
//                    mincost = d[i];
//                    current = i;
//                }
//        }
//        cout<< endl<<"For I = "<<i;
//        cout<<" Minimum cost = "<<mincost;
//        cout<<" Current = "<<current;
//
//        visited[current] = 1;
//        totalvisited++;
//
//        cout<<endl<<"Current = "<<current<<"  Total Visited = "<<totalvisited;
//        cout<<endl<<"*****************************"<<endl;
//    }
//
//    cout<<endl<<"Minimum span tree is "<<endl;
//    mincost =0;
//    for (i=1;i<v;i++)
//    {
//        mincost += d[i];
//        cout<<" Edge "<<names[i].name<<" -> "<<names[p[i]].name<<" Weight = "<<d[i]<<endl;;
//    }
//    cout<<endl<<"*****************************"<<endl;
//    cout<<"Minimum cost = ";
//    cout<<mincost;
//
//    cout<<endl<<"i , visited[i]     p[i]     , d[i]";
//    for (i=0;i<v;i++)
//    {	cout<<endl;
//        cout<<names[i].name<<"\t"<<names[visited[i]].name<<"\t"<<"\t"<<names[p[i]].name<<"\t"<<d[i]<<"\t";
//    }
//    cout<<endl<<"*****************************"<<endl;
//}