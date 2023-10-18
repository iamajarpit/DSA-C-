#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        // print 1st triangle starting from 1 to 5
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        // print 2nd triangle 
       
        while(j<=n){
            cout<<"*";
           j++;
        }
        // print the 3rd triangle
        int start=i-1;
while(start){
    cout<<"*";
    start--;

}
int number=n-i+1;
while(number){
    cout<<number;
    number--;
}
 cout<<endl;
        i++;
                      
    }
    
return 0;
}                                                                     OUTPUT
                                                                 1234554321
                                                                 1234**4321
                                                                 123****321
                                                                 12******21
                                                                 1********1
