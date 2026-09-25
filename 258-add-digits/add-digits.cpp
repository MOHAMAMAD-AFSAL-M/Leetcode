class Solution {
public:
    int recur(int num){
        int sum=0;
        if(num<10){
            return num;
        }
        else{
           while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if(sum<10){
                return sum;
            }
            else{
               return recur(sum);
            } 
        } }
    
    int addDigits(int num) {
        int number=recur(num);
        return number;
    }};