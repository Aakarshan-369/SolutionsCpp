#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
   
    double DistanceFromOrigin ;
    vector <pair < double  ,pair <int,int>> > workervec ;
    workervec.resize(v.size()) ;
    vector <pair <int,int> > FinalSorted ; int i =0 ;
    FinalSorted.resize(v.size());
     for(auto x: v) {
         workervec[i].first = DistanceFromOrigin ; 
       DistanceFromOrigin = (sqrt(x.first*x.first + x.second*x.second)) ;
        workervec[i].second.first = x.first;
        workervec[i].second.second = x.second ;
        i++;
        
    }
    i =0 ; 
    sort (workervec.begin(), workervec.end());
    for(auto x : workervec) {
        FinalSorted[i].first = x.second.first ;
        FinalSorted[i].second = x.second.second ;
        i++ ;
    }

    return FinalSorted ;


}
