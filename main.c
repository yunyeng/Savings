#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j=2, Q = 100, k, max, lastroute,r, a, e=2, temp, g, o;
    int n[5][5];
    int s[4][4];
    int d[5];
    int cost[2];
    int cost2[2];
    int array[20];
    n[0][1] = 28, n[0][2] = 31, n[0][3] = 20, n[0][4] = 25, n[0][5] = 34;
    n[1][2] = 21, n[1][3] = 29, n[1][4] = 26, n[1][5] = 20;
    n[2][3] = 38, n[2][4] = 20, n[2][5] = 32;
    n[3][4] = 30, n[3][5] = 27;
    n[4][5] = 25;
    d[1] = 37, d[2] = 35, d[3] = 30, d[4] = 25, d[5] = 32;
    printf("\nOur unordered Saving Array is:\n");
    for(i=1;i<5;i++){
        while(j<=5){
            if(d[i]+d[j] <= Q){
                s[i][j] = n[0][i] + n[0][j] - n[i][j];
            }
            printf("S[%d][%d]: %d\n", i, j, s[i][j]);
            j++;
        }
        j = 2 + i;
    }
    
    for(int c=1;c<5;c++){
        while(e<=5){
            array[a] = s[c][e];
            e++;
            a++;
        }
        e=2+c;
    }
    for(g=0;g<10;g++){
        for(o=0;o<10-g-1;o++){
            if(array[o] > array[o+1]){
                temp = array[o];
                array[o] = array[o+1];
                array[o+1] = temp;
            }
        }
    }
    printf("\nOur ordered Saving Array is:\n");
    for(a=0;a<10;a++){
        printf("%d\n" , array[a]);
    }
    j=2;
    
    printf("\n");
    j=2;
    max = s[1][2];
    for(i=1;i<5;i++){
        while(j<=5){
            if(s[i][j] > max){
                max = s[i][j];
            }
            j++;
        }
        j = 2 + i;
    }
    j=2;
    for(i=1;i<5;i++){
        while(j<=5){
            if(s[i][j] == max){
                break;
            }
            j++;
        }
        if(s[i][j] == max){
            break;
        }
        j = 2 + i;
    }
    printf("Greatest Saving is [%d][%d]: %d\n\n", i, j, max);
    for(k=1;k<=5;k++){
        if(k != i && k != j && k != 0 && (d[i]+d[j]+d[k] <= Q)){
                cost[k] = n[0][i] + n[i][j] + n[k][j] + n[0][k];
                printf("Min cost 0-%d-%d-%d-0 is: %d\n", i, j, k, cost[k]);
                lastroute = k;
        }
    }

    
    getchar();
    return 0;
}