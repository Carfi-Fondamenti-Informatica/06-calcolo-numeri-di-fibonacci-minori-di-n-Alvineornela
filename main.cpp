#include <iostream>
using namespace std;

int main() {
    int n_sf=1;
    int add=0;
    int n_psf;
    int n;
    cin>>n;
    do{
        cout<<n_sf<<endl;
        n_psf=n_sf;
        n_sf=n_sf+add;
        add=n_psf;
    }while(n_sf<=n);
   return 0;
}
