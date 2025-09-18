int tribonacci(int n) {
    int arr_tri[38] = {0};
    arr_tri[0] = 0;
    arr_tri[1] = 1;
    arr_tri[2] = 1;
    int c = 0;
    int sum = 0;
    int return_sum = 0;
    for(int i=3;i<n+1;i++){
        c = 3;
        sum = 0;
        while(c!=0){
            sum = sum + arr_tri[i-c];
            c--;
        }
        arr_tri[i] = sum;
        printf("%d",arr_tri[i]);
    }
    return arr_tri[n];
}