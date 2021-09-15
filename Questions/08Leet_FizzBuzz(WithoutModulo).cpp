class Solution {
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> arr(n);
        for(int i = 0; i<n; i++)
        {
            arr[i]=to_string(i+1);
        }
        for(int i=2; i<n; i+=3)
        {
            arr[i]="Fizz";
        }
        for(int i=4; i<n; i+=5)
        {
            arr[i]="Buzz";
        }
        for(int i=14; i<n; i+=15)
        {
            arr[i]="FizzBuzz";
        }
        return arr;
    }
};