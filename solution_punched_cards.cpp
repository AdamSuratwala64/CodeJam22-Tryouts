#include<iostream>

int main()
{
    int test = 0;
    std::cin>>test;
    for(int i = 1; i <= test; i++)
    {
        int rows = 0, columns = 0;
        std::cin>>rows>>columns;
        std::cout<<"Case #"<<i<<":"<<std::endl;
        for(int j = 1; j <= rows*2+1; j++)
        {
            for(int k = 1; k <= columns*2+1; k++)
            {
                if((j==1 && k==1)||(j==1 && k==2)||(j==2 && k==1)||(j==2 && k==2)){std::cout<<".";}
                else if((j%2==1 && k%2==1)){std::cout<<"+";}
                else if((j%2==1 && k%2==0)){std::cout<<"-";}
                else if((j%2==0 && k%2==0)){std::cout<<".";}
                else if((j%2==0 && k%2==1)){std::cout<<"|";}
            }
            std::cout<<std::endl;
        }
    }
    
    return 0;
}