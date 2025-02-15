#include<bits/stdc++.h>

#define BILLION 1000000000
#define MILLION 1000000
#define THOUSAND 1000
#define HUNDRED 100

using namespace std;
class Solution {
public:
    string r(int number, unordered_map<int,string>&mp){
        int last_number = number%10;
         if(number>=90){
            return "Ninety "+mp[last_number];
        }
        else if(number>=80) return "Eighty "+mp[last_number];
        else if(number>=70) return "Seventy " + mp[last_number];
        else if(number>=60) return "Sixty "+mp[last_number];
        else if(number>=50) return "Fifty "+mp[last_number];
        else if(number>=40) return "Forty " +mp[last_number];
        else if(number >=30) return "Thirty "+mp[last_number];
        else if(number>=20) return "Twenty "+mp[last_number];
        else return mp[number];

    }
    string numberToWords(int num) {
        unordered_map<int,string>mp;
        string dict[20] = {
        "One",
        "Two",
        "Three",
        "Four",
        "Five",
        "Six",
        "Seven",
        "Eight",
        "Nine",
        "Ten",
        "Eleven",
        "Twelve",
        "Thirteen",
        "Fourteen",
        "Fifteen",
        "Sixteen",
        "Seventeen",
        "Eighteen",
        "Nineteen"};
        for(int i =1;i<=19;i++){
            mp[i] = dict[i-1];
        }


        string result = "";
        int n = num;
        while(n){

            if(n>=BILLION){
                result+=mp[n/BILLION] + " Billion";
                n%=BILLION;
            }
            else if(n>= MILLION){
                int temp = n/MILLION;
               if(temp>=100){

                    result+=r(temp/100,mp) + " Hundred ";
                    result = (temp%100 != 0)?result + r(temp%100,mp):result;


                }
                else {
                    result+=r(temp,mp);
                }
                result+=" Million ";
                n%=MILLION;


            }
            else if(n>=THOUSAND){
                int temp = n/THOUSAND;
               if(temp>=100){

                    result+=r(temp/100,mp) + " Hundred ";
                    result = (temp%100 != 0)?result + r(temp%100,mp):result;


                }
                else {
                    result+=r(temp,mp);
                }
                result+=" Thousand ";
                n%=THOUSAND;
            }
            else if(n>=HUNDRED){
                    result+=r(n/100,mp) + " Hundred ";
                    result = (n%100 != 0)?result + r(n%100,mp):result;
                    n=0;
            }
        }
        return result;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution s;
    cout<<s.numberToWords(n)<<endl;
    return 0;
}
