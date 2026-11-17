void calc (int a, char c, int b, int *sum, int *r){
    if(c == '+'){
        *sum = a + b;
    }
    else if (c == '-'){
        *sum = a - b;
    }
    else {
        *sum = 0;
        *r = 1;
    }   
}