#include "omp.h" 
typedef double real8;

void foo(real8 *y,real8 *d__,real8 *d11,real8 *d12,real8 *d13,real8 *d22,real8 *d23,real8 *d33,real8 *m,int *nell,real8 *p,int t,int flagB,int flagA,int ub)
{
  int l;
  int nel;
  int t1 = t - 1;
  if (flagB == 0) {
    for (l = 0; l <= ub - 1; l += 1) {
      int l8 = l * 8;
      int l36 = l * 36;
      real8 h12 = m[(l8 + 0) * 4 + 1];
      real8 h13 = m[(l8 + 0) * 4 + 2];
      real8 h14 = m[(l8 + 0) * 4 + 3];
      real8 h22 = m[(l8 + 1) * 4 + 1];
      real8 h23 = m[(l8 + 1) * 4 + 2];
      real8 h24 = m[(l8 + 1) * 4 + 3];
      real8 h32 = m[(l8 + 2) * 4 + 1];
      real8 h33 = m[(l8 + 2) * 4 + 2];
      real8 h34 = m[(l8 + 2) * 4 + 3];
      real8 h42 = m[(l8 + 3) * 4 + 1];
      real8 h43 = m[(l8 + 3) * 4 + 2];
      real8 h44 = m[(l8 + 3) * 4 + 3];
      real8 h52 = m[(l8 + 4) * 4 + 1];
      real8 h53 = m[(l8 + 4) * 4 + 2];
      real8 h54 = m[(l8 + 4) * 4 + 3];
      real8 h62 = m[(l8 + 5) * 4 + 1];
      real8 h63 = m[(l8 + 5) * 4 + 2];
      real8 h64 = m[(l8 + 5) * 4 + 3];
      real8 h72 = m[(l8 + 6) * 4 + 1];
      real8 h73 = m[(l8 + 6) * 4 + 2];
      real8 h74 = m[(l8 + 6) * 4 + 3];
      real8 h82 = m[(l8 + 7) * 4 + 1];
      real8 h83 = m[(l8 + 7) * 4 + 2];
      real8 h84 = m[(l8 + 7) * 4 + 3];
      real8 ddd = d__[l];
      y[l36 + 0] += ddd * (h12 * h12 + h13 * h13 + h14 * h14);
      y[l36 + 1] += ddd * (h12 * h22 + h13 * h23 + h14 * h24);
      y[l36 + 2] += ddd * (h22 * h22 + h23 * h23 + h24 * h24);
      y[l36 + 3] += ddd * (h12 * h32 + h13 * h33 + h14 * h34);
      y[l36 + 4] += ddd * (h22 * h32 + h23 * h33 + h24 * h34);
      y[l36 + 5] += ddd * (h32 * h32 + h33 * h33 + h34 * h34);
      y[l36 + 6] += ddd * (h12 * h42 + h13 * h43 + h14 * h44);
      y[l36 + 7] += ddd * (h22 * h42 + h23 * h43 + h24 * h44);
      y[l36 + 8] += ddd * (h32 * h42 + h33 * h43 + h34 * h44);
      y[l36 + 9] += ddd * (h42 * h42 + h43 * h43 + h44 * h44);
      y[l36 + 10] += ddd * (h12 * h52 + h13 * h53 + h14 * h54);
      y[l36 + 11] += ddd * (h22 * h52 + h23 * h53 + h24 * h54);
      y[l36 + 12] += ddd * (h32 * h52 + h33 * h53 + h34 * h54);
      y[l36 + 13] += ddd * (h42 * h52 + h43 * h53 + h44 * h54);
      y[l36 + 14] += ddd * (h52 * h52 + h53 * h53 + h54 * h54);
      y[l36 + 15] += ddd * (h12 * h62 + h13 * h63 + h14 * h64);
      y[l36 + 16] += ddd * (h22 * h62 + h23 * h63 + h24 * h64);
      y[l36 + 17] += ddd * (h32 * h62 + h33 * h63 + h34 * h64);
      y[l36 + 18] += ddd * (h42 * h62 + h43 * h63 + h44 * h64);
      y[l36 + 19] += ddd * (h52 * h62 + h53 * h63 + h54 * h64);
      y[l36 + 20] += ddd * (h62 * h62 + h63 * h63 + h64 * h64);
      y[l36 + 21] += ddd * (h12 * h72 + h13 * h73 + h14 * h74);
      y[l36 + 22] += ddd * (h22 * h72 + h23 * h73 + h24 * h74);
      y[l36 + 23] += ddd * (h32 * h72 + h33 * h73 + h34 * h74);
      y[l36 + 24] += ddd * (h42 * h72 + h43 * h73 + h44 * h74);
      y[l36 + 25] += ddd * (h52 * h72 + h53 * h73 + h54 * h74);
      y[l36 + 26] += ddd * (h62 * h72 + h63 * h73 + h64 * h74);
      y[l36 + 27] += ddd * (h72 * h72 + h73 * h73 + h74 * h74);
      y[l36 + 28] += ddd * (h12 * h82 + h13 * h83 + h14 * h84);
      y[l36 + 29] += ddd * (h22 * h82 + h23 * h83 + h24 * h84);
      y[l36 + 30] += ddd * (h32 * h82 + h33 * h83 + h34 * h84);
      y[l36 + 31] += ddd * (h42 * h82 + h43 * h83 + h44 * h84);
      y[l36 + 32] += ddd * (h52 * h82 + h53 * h83 + h54 * h84);
      y[l36 + 33] += ddd * (h62 * h82 + h63 * h83 + h64 * h84);
      y[l36 + 34] += ddd * (h72 * h82 + h73 * h83 + h74 * h84);
      y[l36 + 35] += ddd * (h82 * h82 + h83 * h83 + h84 * h84);
    }
    if (flagA > 0) {
      
#pragma omp parallel for private (nel,l) firstprivate (ub,t1)
      for (l = 0; l <= ub - 1; l += 1) {
        int l8 = l * 8;
        real8 h1 = m[(t1 + l8) * 4 + 1];
        real8 h2 = m[(t1 + l8) * 4 + 2];
        real8 h3 = m[(t1 + l8) * 4 + 3];
        nel = nell[l];
        p[nell[l]] += d__[l] * 64. * (h1 * h1 + h2 * h2 + h3 * h3);
      }
    }
  }
   else {
    for (l = 0; l <= ub - 1; l += 1) {
      int l8 = l * 8;
      int l36 = l * 36;
      real8 d_11 = d11[l];
      real8 d_12 = d12[l];
      real8 d_13 = d13[l];
      real8 d_22 = d22[l];
      real8 d_23 = d23[l];
      real8 d_33 = d33[l];
      real8 h12 = m[(l8 + 0) * 4 + 1];
      real8 h13 = m[(l8 + 0) * 4 + 2];
      real8 h14 = m[(l8 + 0) * 4 + 3];
      real8 h22 = m[(l8 + 1) * 4 + 1];
      real8 h23 = m[(l8 + 1) * 4 + 2];
      real8 h24 = m[(l8 + 1) * 4 + 3];
      real8 h32 = m[(l8 + 2) * 4 + 1];
      real8 h33 = m[(l8 + 2) * 4 + 2];
      real8 h34 = m[(l8 + 2) * 4 + 3];
      real8 h42 = m[(l8 + 3) * 4 + 1];
      real8 h43 = m[(l8 + 3) * 4 + 2];
      real8 h44 = m[(l8 + 3) * 4 + 3];
      real8 h52 = m[(l8 + 4) * 4 + 1];
      real8 h53 = m[(l8 + 4) * 4 + 2];
      real8 h54 = m[(l8 + 4) * 4 + 3];
      real8 h62 = m[(l8 + 5) * 4 + 1];
      real8 h63 = m[(l8 + 5) * 4 + 2];
      real8 h64 = m[(l8 + 5) * 4 + 3];
      real8 h72 = m[(l8 + 6) * 4 + 1];
      real8 h73 = m[(l8 + 6) * 4 + 2];
      real8 h74 = m[(l8 + 6) * 4 + 3];
      real8 h82 = m[(l8 + 7) * 4 + 1];
      real8 h83 = m[(l8 + 7) * 4 + 2];
      real8 h84 = m[(l8 + 7) * 4 + 3];
      y[l36 + 0] = y[l36 + 0] + h12 * (d_11 * h12 + d_12 * h13 + d_13 * h14) + h13 * (d_12 * h12 + d_22 * h13 + d_23 * h14) + h14 * (d_13 * h12 + d_23 * h13 + d_33 * h14);
      y[l36 + 1] = y[l36 + 1] + h22 * (d_11 * h12 + d_12 * h13 + d_13 * h14) + h23 * (d_12 * h12 + d_22 * h13 + d_23 * h14) + h24 * (d_13 * h12 + d_23 * h13 + d_33 * h14);
      y[l36 + 2] = y[l36 + 2] + h22 * (d_11 * h22 + d_12 * h23 + d_13 * h24) + h23 * (d_12 * h22 + d_22 * h23 + d_23 * h24) + h24 * (d_13 * h22 + d_23 * h23 + d_33 * h24);
      y[l36 + 3] = y[l36 + 3] + h32 * (d_11 * h12 + d_12 * h13 + d_13 * h14) + h33 * (d_12 * h12 + d_22 * h13 + d_23 * h14) + h34 * (d_13 * h12 + d_23 * h13 + d_33 * h14);
      y[l36 + 4] = y[l36 + 4] + h32 * (d_11 * h22 + d_12 * h23 + d_13 * h24) + h33 * (d_12 * h22 + d_22 * h23 + d_23 * h24) + h34 * (d_13 * h22 + d_23 * h23 + d_33 * h24);
      y[l36 + 5] = y[l36 + 5] + h32 * (d_11 * h32 + d_12 * h33 + d_13 * h34) + h33 * (d_12 * h32 + d_22 * h33 + d_23 * h34) + h34 * (d_13 * h32 + d_23 * h33 + d_33 * h34);
      y[l36 + 6] = y[l36 + 6] + h42 * (d_11 * h12 + d_12 * h13 + d_13 * h14) + h43 * (d_12 * h12 + d_22 * h13 + d_23 * h14) + h44 * (d_13 * h12 + d_23 * h13 + d_33 * h14);
      y[l36 + 7] = y[l36 + 7] + h42 * (d_11 * h22 + d_12 * h23 + d_13 * h24) + h43 * (d_12 * h22 + d_22 * h23 + d_23 * h24) + h44 * (d_13 * h22 + d_23 * h23 + d_33 * h24);
      y[l36 + 8] = y[l36 + 8] + h42 * (d_11 * h32 + d_12 * h33 + d_13 * h34) + h43 * (d_12 * h32 + d_22 * h33 + d_23 * h34) + h44 * (d_13 * h32 + d_23 * h33 + d_33 * h34);
      y[l36 + 9] = y[l36 + 9] + h42 * (d_11 * h42 + d_12 * h43 + d_13 * h44) + h43 * (d_12 * h42 + d_22 * h43 + d_23 * h44) + h44 * (d_13 * h42 + d_23 * h43 + d_33 * h44);
      y[l36 + 10] = y[l36 + 10] + h52 * (d_11 * h12 + d_12 * h13 + d_13 * h14) + h53 * (d_12 * h12 + d_22 * h13 + d_23 * h14) + h54 * (d_13 * h12 + d_23 * h13 + d_33 * h14);
      y[l36 + 11] = y[l36 + 11] + h52 * (d_11 * h22 + d_12 * h23 + d_13 * h24) + h53 * (d_12 * h22 + d_22 * h23 + d_23 * h24) + h54 * (d_13 * h22 + d_23 * h23 + d_33 * h24);
      y[l36 + 12] = y[l36 + 12] + h52 * (d_11 * h32 + d_12 * h33 + d_13 * h34) + h53 * (d_12 * h32 + d_22 * h33 + d_23 * h34) + h54 * (d_13 * h32 + d_23 * h33 + d_33 * h34);
      y[l36 + 13] = y[l36 + 13] + h52 * (d_11 * h42 + d_12 * h43 + d_13 * h44) + h53 * (d_12 * h42 + d_22 * h43 + d_23 * h44) + h54 * (d_13 * h42 + d_23 * h43 + d_33 * h44);
      y[l36 + 14] = y[l36 + 14] + h52 * (d_11 * h52 + d_12 * h53 + d_13 * h54) + h53 * (d_12 * h52 + d_22 * h53 + d_23 * h54) + h54 * (d_13 * h52 + d_23 * h53 + d_33 * h54);
      y[l36 + 15] = y[l36 + 15] + h62 * (d_11 * h12 + d_12 * h13 + d_13 * h14) + h63 * (d_12 * h12 + d_22 * h13 + d_23 * h14) + h64 * (d_13 * h12 + d_23 * h13 + d_33 * h14);
      y[l36 + 16] = y[l36 + 16] + h62 * (d_11 * h22 + d_12 * h23 + d_13 * h24) + h63 * (d_12 * h22 + d_22 * h23 + d_23 * h24) + h64 * (d_13 * h22 + d_23 * h23 + d_33 * h24);
      y[l36 + 17] = y[l36 + 17] + h62 * (d_11 * h32 + d_12 * h33 + d_13 * h34) + h63 * (d_12 * h32 + d_22 * h33 + d_23 * h34) + h64 * (d_13 * h32 + d_23 * h33 + d_33 * h34);
      y[l36 + 18] = y[l36 + 18] + h62 * (d_11 * h42 + d_12 * h43 + d_13 * h44) + h63 * (d_12 * h42 + d_22 * h43 + d_23 * h44) + h64 * (d_13 * h42 + d_23 * h43 + d_33 * h44);
      y[l36 + 19] = y[l36 + 19] + h62 * (d_11 * h52 + d_12 * h53 + d_13 * h54) + h63 * (d_12 * h52 + d_22 * h53 + d_23 * h54) + h64 * (d_13 * h52 + d_23 * h53 + d_33 * h54);
      y[l36 + 20] = y[l36 + 20] + h62 * (d_11 * h62 + d_12 * h63 + d_13 * h64) + h63 * (d_12 * h62 + d_22 * h63 + d_23 * h64) + h64 * (d_13 * h62 + d_23 * h63 + d_33 * h64);
      y[l36 + 21] = y[l36 + 21] + h72 * (d_11 * h12 + d_12 * h13 + d_13 * h14) + h73 * (d_12 * h12 + d_22 * h13 + d_23 * h14) + h74 * (d_13 * h12 + d_23 * h13 + d_33 * h14);
      y[l36 + 22] = y[l36 + 22] + h72 * (d_11 * h22 + d_12 * h23 + d_13 * h24) + h73 * (d_12 * h22 + d_22 * h23 + d_23 * h24) + h74 * (d_13 * h22 + d_23 * h23 + d_33 * h24);
      y[l36 + 23] = y[l36 + 23] + h72 * (d_11 * h32 + d_12 * h33 + d_13 * h34) + h73 * (d_12 * h32 + d_22 * h33 + d_23 * h34) + h74 * (d_13 * h32 + d_23 * h33 + d_33 * h34);
      y[l36 + 24] = y[l36 + 24] + h72 * (d_11 * h42 + d_12 * h43 + d_13 * h44) + h73 * (d_12 * h42 + d_22 * h43 + d_23 * h44) + h74 * (d_13 * h42 + d_23 * h43 + d_33 * h44);
      y[l36 + 25] = y[l36 + 25] + h72 * (d_11 * h52 + d_12 * h53 + d_13 * h54) + h73 * (d_12 * h52 + d_22 * h53 + d_23 * h54) + h74 * (d_13 * h52 + d_23 * h53 + d_33 * h54);
      y[l36 + 26] = y[l36 + 26] + h72 * (d_11 * h62 + d_12 * h63 + d_13 * h64) + h73 * (d_12 * h62 + d_22 * h63 + d_23 * h64) + h74 * (d_13 * h62 + d_23 * h63 + d_33 * h64);
      y[l36 + 27] = y[l36 + 27] + h72 * (d_11 * h72 + d_12 * h73 + d_13 * h74) + h73 * (d_12 * h72 + d_22 * h73 + d_23 * h74) + h74 * (d_13 * h72 + d_23 * h73 + d_33 * h74);
      y[l36 + 28] = y[l36 + 28] + h82 * (d_11 * h12 + d_12 * h13 + d_13 * h14) + h83 * (d_12 * h12 + d_22 * h13 + d_23 * h14) + h84 * (d_13 * h12 + d_23 * h13 + d_33 * h14);
      y[l36 + 29] = y[l36 + 29] + h82 * (d_11 * h22 + d_12 * h23 + d_13 * h24) + h83 * (d_12 * h22 + d_22 * h23 + d_23 * h24) + h84 * (d_13 * h22 + d_23 * h23 + d_33 * h24);
      y[l36 + 30] = y[l36 + 30] + h82 * (d_11 * h32 + d_12 * h33 + d_13 * h34) + h83 * (d_12 * h32 + d_22 * h33 + d_23 * h34) + h84 * (d_13 * h32 + d_23 * h33 + d_33 * h34);
      y[l36 + 31] = y[l36 + 31] + h82 * (d_11 * h42 + d_12 * h43 + d_13 * h44) + h83 * (d_12 * h42 + d_22 * h43 + d_23 * h44) + h84 * (d_13 * h42 + d_23 * h43 + d_33 * h44);
      y[l36 + 32] = y[l36 + 32] + h82 * (d_11 * h52 + d_12 * h53 + d_13 * h54) + h83 * (d_12 * h52 + d_22 * h53 + d_23 * h54) + h84 * (d_13 * h52 + d_23 * h53 + d_33 * h54);
      y[l36 + 33] = y[l36 + 33] + h82 * (d_11 * h62 + d_12 * h63 + d_13 * h64) + h83 * (d_12 * h62 + d_22 * h63 + d_23 * h64) + h84 * (d_13 * h62 + d_23 * h63 + d_33 * h64);
      y[l36 + 34] = y[l36 + 34] + h82 * (d_11 * h72 + d_12 * h73 + d_13 * h74) + h83 * (d_12 * h72 + d_22 * h73 + d_23 * h74) + h84 * (d_13 * h72 + d_23 * h73 + d_33 * h74);
      y[l36 + 35] = y[l36 + 35] + h82 * (d_11 * h82 + d_12 * h83 + d_13 * h84) + h83 * (d_12 * h82 + d_22 * h83 + d_23 * h84) + h84 * (d_13 * h82 + d_23 * h83 + d_33 * h84);
    }
    if (flagA > 0) {
      
#pragma omp parallel for private (nel,l) firstprivate (ub,t1)
      for (l = 0; l <= ub - 1; l += 1) {
        int l8 = l * 8;
        real8 h1 = m[(t1 + l8) * 4 + 1];
        real8 h2 = m[(t1 + l8) * 4 + 2];
        real8 h3 = m[(t1 + l8) * 4 + 3];
        nel = nell[l];
        p[nell[l]] += (h1 * (d11[l] * h1 + d12[l] * 2. * h2 + d13[l] * 2. * h3) + h2 * (d22[l] * h2 + d23[l] * 2. * h3) + h3 * d33[l] * h3) * 64.;
      }
    }
  }
}
