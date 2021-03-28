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
    return Index;
}

tuple<int,int> InverseIdx(int index, int rows, int columns){
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
        int z = 0;
        for (int i = 0; i < 8; i++) { 
            for (int j = 0; j < 8; j++) { 
                if (i < j) { 
                    array1[i][j] =0;
                }
                else{
                    int random = rand()%(1000)+1;
                    array1[i][j] = random;//fills array with random values
                    if(z<20){
                    cout << array1[i][j] << " ";}  //outputs array
                    z++;
                    }
                } 
                if(z<20){
            cout << endl; }
        }
    cout<< "  \n"<<endl;
    z=0;
    int array2[32][32];
    for (int i = 0; i < 32; i++) { 
        for (int j = 0; j < 32; j++) { 
            if (i < j) { 
                array1[i][j] =0;
            } 
            else{
                int random = rand()%(1000)+1;
                array2[i][j] = random;
                 if(z<20){
                cout << array2[i][j] << " ";}
                z++;} 
            }  if(z<20){
        cout << endl; }
    }
    cout<< "  \n"<<endl;
    z=0;
    int array3[128][128];
    for (int i = 0; i < 128; i++) { 
        for (int j = 0; j < 128; j++) { 
            if (i > j) { 
                array3[i][j] =0;
            } 
            else{
                int random = rand()%(1000)+1;
                array3[i][j] = random;
                 if(z<20){
                cout << array3[i][j] << " ";
                z++;}
                } 
            } if(z<20){ 
        cout << endl;}
}
  
    int arrayB1[64];
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++) { 
            int I =LinearIndx(8,i,j); //inserts into the 1 dimensional array the values of the 2d array
            if (i<j){ //ensures inserting of only lower trianbular matrix values
            arrayB1[I] = array1[i][j];
            }
        }
    
    }
    
     cout<< "  \n"<<endl;
    int accumulator1 = 0;
    while(accumulator1<20){
    cout<<arrayB1[accumulator1] << " ";
    accumulator1++;
    }
    

    int arrayB2[1024];
    for (int i = 0; i < 32; i++) { 
        for (int j = 0; j < 32; j++) { 
            int I =LinearIndx(32,i,j);
            if (i<j){ //ensures inserting of only lower trianbular matrix values
            arrayB2[I] = array2[i][j];
            }
        }
    }
    cout<< "  \n"<<endl;
    int accumulator2 = 0;
    while(accumulator2<20){
    cout<< arrayB2[accumulator2] << " ";
    accumulator2++;
    }

    int arrayB3[16384];
    for (int i = 0; i < 128; i++) { 
        for (int j = 0; j < 128; j++) { 
            int I =LinearIndx(128,i,j);
                if (i<j){ //ensures inserting of only lower trianbular matrix values
            arrayB3[I] = array3[i][j];
                }
        }
    }
    
     cout<< "  \n"<<endl;
    int accumulator3 = 0;
    while(accumulator3<20){
    cout<< arrayB3[accumulator3] << " ";
    accumulator3++;
    }
    
    cout<< "  \n"<<endl;
    z=0;
    int arrayC1[8][8];
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++) { 
                int I =LinearIndx(I,j,8); //converts 1d array back to 2d array with InverseIdx values.
                tuple<int,int> indices =InverseIdx(I,8,8);
                arrayC1[get<0>(indices)][get<1>(indices)];
                if(z<20){
                    cout << arrayC1[i][j] << " ";}  //outputs array
                    z++;
                }
                if(z<20){ 
        cout << endl;}
        }
        
    cout<< "  \n"<<endl;
    z=0;
    int arrayC2[32][32];
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++) { 
                int I =LinearIndx(I,j,8);
                tuple<int,int> indices =InverseIdx(I,8,8);
                arrayC2[get<0>(indices)][get<1>(indices)];
                if(z<20){
                    cout << arrayC2[i][j] << " ";}  //outputs array
                    z++;
                }if (z<20){cout << endl;}
            } 
    
    cout<< "  \n"<<endl;
    z=0;
    int arrayC3[128][128];
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++) { 
                int I =LinearIndx(I,j,8);
                tuple<int,int> indices =InverseIdx(I,8,8);
                arrayC3[get<0>(indices)][get<1>(indices)];
                if(z<20){
                    cout << arrayC3[i][j] << " ";}  //outputs array
                    z++;
                }  if (z<20){cout << endl;}
        }

return 0;
} 
