class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      vector<vector<int>> matrixFinal ;
      matrixFinal.resize(matrix.size()) ;
      int matrixFinalRowIterator= 0 , matrixColumnTermSelector =0 ;
      while(matrixFinalRowIterator < matrix.size()) {
            for(auto x:matrix) {
                  matrixFinal[matrixFinalRowIterator].push_back(x[matrixColumnTermSelector]); 
            }
            matrixFinalRowIterator++; matrixColumnTermSelector++ ;
      } int matrixIterator =0 ;
    for(auto x: matrix){
         
            reverse(matrixFinal[matrixIterator].begin(),matrixFinal[matrixIterator].end()); 
            matrixIterator ++;
      }
      
      
      matrix = matrixFinal ;

    }
};