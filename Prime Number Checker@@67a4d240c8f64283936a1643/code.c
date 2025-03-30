int isPrime(int num){
    if(num>0){
        if(num<2){
            return 0;
        }
        else{
            for(int i=2;i<num;i++){
                if(num%i==0){
                    return 0;
                    break;
                }
            }
            return 1;
        }
    }
}
