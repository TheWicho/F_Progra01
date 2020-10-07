#include <iostream>

using namespace std;

int main()
{
    int nel=0;
 while(nel<6){
  int v=1,c1,c2,c3,c4,q=1,fm,cm;
  //Determinador
  int tam,x,w,a=0,b=0;
  cout <<"\n" << "\n";
   cout << "Dame el tamaño de la matriz \n";
   cin >> tam;
   for(x=0;x<tam-1;x++){
    w = x % 2;
    if(w==0){
        a++;
    }
    if(w==1){
    b++;
    }
   }
//Valor Final
int im,h=1;
for(im=1;im<tam;im++){
    h=h+2;
}
//Valores iniciales
int arr[tam][tam];
int vc1=0,vc11=0,vc1lim=tam;
int vc2=1,vc21=tam-1,vc2lim=tam;
int vc3=tam-2,vc31=tam-1,vc3lim=-1;
int vc4=tam-2,vc41=0,vc4lim=0;
//Llenador
for(fm=0;fm<tam;fm++){
    for(cm=0;cm<tam;cm++){
      arr[fm][cm]=0;
    }
}
//operacion to loca

while(v==1){
if(v==1){
for(c1=vc1;c1<vc1lim;c1++){
    arr[vc11][c1]=q;
}q++;
if(arr[a][b]==h){ v++;}
}
if(v==1){
for(c2=vc2;c2<vc2lim;c2++){
    arr[c2][vc21]=q;
   }q++;
if(arr[a][b]==h){ v++;}
}
if(v==1){
for(c3=vc3;c3>vc3lim;c3--){
    arr[vc31][c3]=q;
}q++;
if(arr[a][b]==h){ v++;}
}
if(v==1){
for(c4=vc4;c4>vc4lim;c4--){
    arr[c4][vc41]=q;
}q++;
if(arr[a][b]==h){ v++;}
}

vc1++;
vc11++;
vc1lim--;
vc2++;
vc21--;
vc2lim--;
vc3--;
vc31--;
vc3lim++;
vc4--;
vc41++;
vc4lim++;
}


//Mostrador
for(fm=0;fm<tam;fm++){    cout<< "\n";
    for(cm=0;cm<tam;cm++){
        if(cm==tam-1){
            cout <<  arr[fm][cm];
        }else{
       cout <<  arr[fm][cm] << "-";

    }}
}
 nel++;}
    return 0;

}



