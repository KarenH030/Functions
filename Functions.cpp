#include <iostream>
#include <string>
#include <cmath>

int mid_nums_count(const int num1,const int num2) ;
const bool is_prime(const int num);
const bool is_prime_plus_prime (const int num) ;
int rec_factorial(int num) ;  // recursive function
void reverse_string(std::string word);
void array_reverse_print(const int* arr,const int size) ;
int fibonacci_num(int index) ; // recursive function
int digit_sum (int sum) ;
int before_nums_sum(int num);
void dec_to_bin_print (int num);
const bool is palindrome(std::string word);
int min_arr_element(int* arr, const int size);
int max_arr_element(int* arr, const int size);
char first_capital(std::string word);
int greatest_divisor(int num1 , int num2);
std::string dec_to_bin(int num);
int bin_to_dec(int bin);
int getlen(const char* str);


int main()
{
	


}




int mid_nums_count (const int num1,const int num2)
{
        int count = 0 ;
        for(int i = num1; i < num2 ; i++ )
                count++ ;
        return count - 1 ;
}

const bool is_prime(const int num)
{
        if (num == 2)
                return true;
        if (num % 2 == 0)
                return false;
        for (int i = 3; i < num / 2 ; i += 2)
        {
                if(num % i == 0)
                        return false;
        }
        return true ;

}


const bool is_prime_plus_prime(const int num)
{
        for (int i = 2; i < num ; i++)
        {
                if ( is_prime(i) )
                {
                        if(is_prime(num-i))
                        {
                                return true;
                        }
                }
        }

        return false;
}


int rec_factorial(int num)
{
        if (num == 0 || num == 1)
                return 1 ;
        num = num * rec_factorial(num - 1) ;
        return num ;
}


void reverse_string(std::string word)
{
        if(word.size() == 0)
                return ;
        reverse_string(word.substr(1)) ;
        std:: cout << word[0];
}





void array_reverse_print(const int* arr,const int size)
{
        for (int i = size - 1 ; i > -1 ; i--)
        {
                std::cout << arr[i] << ' ' ;
        }

}


int fibonacci_num(int index)
{
        if (index == 1 or index == 2)
                return 1 ;
        else
        {
                return (fibonacci_num(index-1) + fibonacci_num(index - 2) )  ;
        }
}




int digit_sum(int num)
{
        int sum ;
        for (sum = 0 ; num != 0 ; num = num / 10)
        {
                sum += num % 10;
        }
        return sum ;
}

int before_nums_sum(int num)
{

        if (num >= 0)
                return (num * (num + 1)) / 2 ;
        else
                return (num * (num - 1)) / (-2) ;
}


void dec_to_bin_print(int num)
{
        int k;
        for (k = 1; k <= num ; k = k * 2) {}
        k = k / 2;
        for( ; k != 0 ; k = k / 2 )
        {
                if (num / k == 1 )
                {
                        std::cout << '1';
                        num -= k ;
                }
                else
                        std::cout <<'0';
        }
        std::cout << std::endl;
}



const bool is_palindrome(std::string word )
{
        int size = word.size() ;
        for(int i = 0; i * 2 <= size ; i++)
        {
                if(word[i] != word[(size - 1) - i] )
                        return false;
        }

        return true ;

}

int min_arr_element(int* arr,const int size)
{
         int min_arr = arr[0];
         for(int i = 1 ; i < size ; i++)
         {
                 if(arr[i] < min_arr)
                         min_arr = arr[i];
         }
         return min_arr;
}

int max_arr_element(int* arr,const int size)
{
         int max_arr = arr[0];
         for(int i = 1 ; i < size ; i++)
         {
                 if(arr[i] >  max_arr)
                 max_arr = arr[i];
         }
         return max_arr;
}


char first_capital(std::string word )
{

        static int z = 0 ;
        if ( word.size() == z)
        {
                return 'a' ;
        }
        if (word[z] <'a' && word[z] >= 'A')
                return word[z] ;
        z++ ;
        return first_capital(word);

}


int greatest_divisor(int num1,int num2)
{
        int max_div  = 1 ;
        for(int i = 2; i <= num1 && i <= num2;i++)
        {
                if (num1 % i == 0 && num2 % i == 0 )
                        max_div = i ;
        }

        return max_div ;
}



std::string dec_to_bin(int num)
{
        static std::string bincode = "" ;
        if (num == 0)
                return 0 ;
        while(num > 0)
        {
                bincode = ((num & 1) == 0 ? '0' : '1' ) + bincode ;
                num /= 2 ;
        }
        return bincode ;
}


int bin_to_dec (int bin)
{
        static int  dec = 0 ;
        static int index = 0 ;
        int code = bin % 10 ;

        if( bin == 0 )
                return dec ;
        dec = dec + code * pow(2,index) ;
        index++ ;
         bin /= 10 ;
         return  bin_to_dec(bin) ;

}


int getlen (const char* str)
{
        if(*str == '\0')
                return 0 ;
        return 1 + getlen(str + 1) ;
}






