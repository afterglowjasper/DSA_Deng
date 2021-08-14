#include <iostream>
using namespace std;
const int N = 5*1e5+10;
int a[N], m, n;
int l, r, mid, x, y, rt;

void quick_sort(int l, int r){
    if(l >= r) return;
    int i = l-1, j = r+1, x = a[l+r>>1];
    while(i < j){
        while(a[++i] < x);
        while(a[--j] > x);
        if(i < j) swap(a[i], a[j]);
    }
    quick_sort(l, j), quick_sort(j+1, r);
}

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i ++){
        scanf("%d", &a[i]);
    }
    quick_sort(0, n-1);
    while(m --){
        scanf("%d %d", &x, &y);
        l = 0, r = n-1;
        while(l < r){
            mid = l + r + 1>> 1;
            if(a[mid] <= y) l = mid;
            else r = mid-1;
        }
        if(a[r] <= y) rt = r;
        else {
            puts("0");
            continue;
        }

        l = 0, r = rt;
        while(l < r){
            mid = l + r >> 1;
            if(a[mid] >= x) r = mid;
            else l = mid + 1;
        }
        if(a[l] >= x) printf("%d\n", rt-l+1);
        else puts("0");
    }
    return 0;
}