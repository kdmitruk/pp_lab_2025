#include<iostream>

using namespace std;

void populate(int*** arr, int n, int m, int o ){

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            for(int k=0; k<o; k++){
                arr[i][j][k] = k+j*10+i*100;
            }
        }
    }
}
void show(int*** arr, int n, int m, int o ){

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<o; k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }
}


int main(){
    int n=3, m=4, o=5;
    //cin>>n>>m>>o;

    int*** arr = new int**[n];
    for(int i=0; i<n; i++){
        arr[i] = new int*[m];
        for (int j=0; j<m; j++){
            arr[i][j] = new int[o];
        }
    }
    populate(arr, n, m, o);
    show(arr, n, m, o);
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}





