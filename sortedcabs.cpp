#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
   
    double DistanceFromOrigin ;
    vector <pair < double  ,pair <int,int>> > WorkerVectorStoringPairWithDistance ;
    WorkerVectorStoringPairWithDistance.resize(v.size()) ;
    vector <pair <int,int> > FinalSorted ; int i =0 ;
    FinalSorted.resize(v.size());
     for(auto x: v) {
         WorkerVectorStoringPairWithDistance[i].first = DistanceFromOrigin ; 
       DistanceFromOrigin = (sqrt(x.first*x.first + x.second*x.second)) ;
        WorkerVectorStoringPairWithDistance[i].second.first = x.first;
        WorkerVectorStoringPairWithDistance[i].second.second = x.second ;
        i++;
        
    }
    i =0 ; 
    sort (WorkerVectorStoringPairWithDistance.begin(), WorkerVectorStoringPairWithDistance.end());
    for(auto x : WorkerVectorStoringPairWithDistance) {
        FinalSorted[i].first = x.second.first ;
        FinalSorted[i].second = x.second.second ;
        i++ ;
    }

    return FinalSorted ;


}
