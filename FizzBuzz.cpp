class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> answer(n);
        for (int i = 1; i <= n; i++){
            if (i % 3 == 0 && i % 5 == 0){
                answer[i-1] = "FizzBuzz";
            }
            else if (i % 3 == 0){
                answer[i-1] = "Fizz";
            }
            else if (i % 5 == 0){
                answer[i-1] = "Buzz";
            }
            else{
                answer[i-1] = to_string(i);
            }
        }
        // int i = 2;
        // answer[0] = "1";
        // answer[1] = "2";
        // while (i < n+1){
        //     if ((i % 3) == 0 && (i % 5) == 0){
        //         answer[i] = "FizzBuzz";
        //     }
        //     else if (i % 3 == 0){
        //         answer[i] = "Fizz";
        //     }
        //     else if (i % 5 == 0){
        //         answer[i] = "Buzz";
        //     }
            
        //     else if (i > 2){
        //         answer[i] = to_string(i);
        //     }
        //     i++;
        // }
        // i = 0;
        return answer;
    }
};