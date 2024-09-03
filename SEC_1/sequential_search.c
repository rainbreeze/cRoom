int sequential_search(int A[], int n, int key){
    for (int i = 0; i < n; i++){
        if(A[i] == key){
            return i;
        }
    }
    return -1;
}