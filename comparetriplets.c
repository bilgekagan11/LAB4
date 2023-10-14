int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    a_count = 0;
    b_count = 0;
    for (int i = 0; i<3 ; i++){
        if ( a[i] < b[i]){
            b_count++;
        }else if (a[i]> b[i]){
            a_count++;
        }
    }
    result_count[0] = a_count;
    result_count[1] = b_count;
    return result_count;
}