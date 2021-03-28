#include <iostream>
#include <tuple>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std ;
//function for linear index computation
int LinearIndx(int col,int i, int j){
    int Index = i * col + j;
    cout << Index <<endl;
    return Index;
}

tuple<int,int> InverseIdx(int index, int columns, int rows){
	//function for linear index computation
for(int i=0; i<rows; i++){
        //check if the index parameter is in the row
        if(index < (columns * i) + columns && index >= columns * i){
            //return i, j indices
            return make_tuple(i,index - columns * i);
        }
    }
    return make_tuple(0,0); //return tuples as indices
}

int main(int argc, char *argv[]){
    int array1[8][8];
    srand(time(0));
        for (int i = 0; i < 8; i++) { 
            for (int j = 0; j < 8; j++) { 
                if (i < j) { 
                    array1[i][j] =0;
                    cout<<array1[i][j]<< " ";
                } //fills array with 0 if rows are less than columns.
                else{
                    int random = rand()%(1000)+1;
                    array1[i][j] = random;//fills array with random values
                    cout << array1[i][j] << " ";}  //outputs array
                } 
            cout << endl;
        }

    int array2[32][32];
    for (int i = 0; i < 32; i++) { 
        for (int j = 0; j < 32; j++) { 
            if (i < j) { 
                array1[i][j] =0;
                cout<<array2[i][j]<< " "; 
            } 
            else{
                int random = rand()%(1000)+1;
                array2[i][j] = random;
                cout << array2[i][j] << " ";} 
            } 
        cout << endl;
    }
    
    int array3[128][128];
    for (int i = 0; i < 128; i++) { 
        for (int j = 0; j < 128; j++) { 
            if (i < j) { 
                array3[i][j] =0;
                cout<<array3[i][j]<< " ";
            } 
            else{
                int random = rand()%(1000)+1;
                array3[i][j] = random;
                cout << array3[i][j] << " ";} 
            } 
        cout << endl;
}
    
    int array1D[64];
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++) { 
            int I =LinearIndx(i,j,8); //inserts into the 1 dimensional array the values of the 2d array
                int num;
                num = array1[i][j];
                array1D[I] = num;
                cout<< num << " ";
        }

    }

    int array2D[1024];
    for (int i = 0; i < 32; i++) { 
        for (int j = 0; j < 32; j++) { 
            int I =LinearIndx(i,j,32);
                int num;
                num = array2[i][j];
                array2D[I] = num;
                cout<< num << " ";
        }

    }

    int array3D[16384];
    for (int i = 0; i < 128; i++) { 
        for (int j = 0; j < 128; j++) { 
            int I =LinearIndx(i,j,128);
                int num;
                num = array3[i][j];
                array3D[I] = num;
                cout<< num << " ";
        }

    }
    int arrayC1[8][8];
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++) { 
                int I =LinearIndx(I,j,8); //converts 1d array back to 2d array with InverseIdx values.
                tuple<int,int> indices =InverseIdx(I,8,8);
                arrayC1[get<0>(indices)][get<1>(indices)];
                cout << arrayC1[i][j] << " "; 
                } 
            cout << endl;
        }

    int arrayC2[32][32];
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++) { 
                int I =LinearIndx(I,j,8);
                tuple<int,int> indices =InverseIdx(I,8,8);
                arrayC2[get<0>(indices)][get<1>(indices)];
                cout << arrayC2[i][j] << " "; 
                } 
            cout << endl;
        }

    int arrayC3[128][128];
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++) { 
                int I =LinearIndx(I,j,8);
                tuple<int,int> indices =InverseIdx(I,8,8);
                arrayC3[get<0>(indices)][get<1>(indices)];
                cout << arrayC3[i][j] << " "; 
                } 
            cout << endl;
        }

return 0;
} 
