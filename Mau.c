// 2021.01.16

#include "Mau.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#pragma mark ---- Tập Màu
TapHopMau datMauXam() {
   
   TapHopMau tapHopMau;

   tapHopMau.soLuongMau = 3;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
      tapHopMau.danhSach[0] = 0.000000f;
      tapHopMau.danhSach[1] = 0.000000f;
      tapHopMau.danhSach[2] = 0.000000f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 1.000000f;
      tapHopMau.danhSach[5] = 1.000000f;
      tapHopMau.danhSach[6] = 1.000000f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 0.000000f;
      tapHopMau.danhSach[9] = 0.000000f;
      tapHopMau.danhSach[10] = 0.000000f;
      tapHopMau.danhSach[11] = 1.000000f;
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }

   return tapHopMau;
}

TapHopMau datMauHoaHongVaXanh() {
   
   TapHopMau tapHopMau;
   tapHopMau.soLuongMau = 8;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
      tapHopMau.danhSach[0] = 0.000000f;
      tapHopMau.danhSach[1] = 0.700000f;
      tapHopMau.danhSach[2] = 1.000000f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 0.800000f;
      tapHopMau.danhSach[5] = 0.900000f;
      tapHopMau.danhSach[6] = 1.000000f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 0.970000f;
      tapHopMau.danhSach[9] = 0.700000f;
      tapHopMau.danhSach[10] = 1.000000f;
      tapHopMau.danhSach[11] = 1.000000f;
      // ----
      tapHopMau.danhSach[12] = 1.000000f;
      tapHopMau.danhSach[13] = 0.450000f;
      tapHopMau.danhSach[14] = 0.750000f;
      tapHopMau.danhSach[15] = 1.000000f;
      // ----
      tapHopMau.danhSach[16] = 1.000000f;
      tapHopMau.danhSach[17] = 0.700000f;
      tapHopMau.danhSach[18] = 0.750000f;
      tapHopMau.danhSach[19] = 1.000000f;
      // ----
      tapHopMau.danhSach[20] = 0.430000f;
      tapHopMau.danhSach[21] = 0.320000f;
      tapHopMau.danhSach[22] = 0.650000f;
      tapHopMau.danhSach[23] = 1.000000f;
      // ----
      tapHopMau.danhSach[24] = 0.000000f;
      tapHopMau.danhSach[25] = 0.150000f;
      tapHopMau.danhSach[26] = 1.000000f;
      tapHopMau.danhSach[27] = 1.000000f;
      // ----
      tapHopMau.danhSach[28] = tapHopMau.danhSach[0];
      tapHopMau.danhSach[29] = tapHopMau.danhSach[1];
      tapHopMau.danhSach[30] = tapHopMau.danhSach[2];
      tapHopMau.danhSach[31] = tapHopMau.danhSach[3];
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }
   
   return tapHopMau;
}


TapHopMau datMauDaiDuong() {
   
   TapHopMau tapHopMau;
   tapHopMau.soLuongMau = 6;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
      tapHopMau.danhSach[0] = 0.000000f;
      tapHopMau.danhSach[1] = 0.000000f;
      tapHopMau.danhSach[2] = 0.500000f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 0.000000f;
      tapHopMau.danhSach[5] = 0.400000f;
      tapHopMau.danhSach[6] = 0.900000f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 0.950000f;
      tapHopMau.danhSach[9] = 1.000000f;
      tapHopMau.danhSach[10] = 1.000000f;
      tapHopMau.danhSach[11] = 1.000000f;
      // ----
      tapHopMau.danhSach[12] = 0.000000f;
      tapHopMau.danhSach[13] = 0.850000f;
      tapHopMau.danhSach[14] = 0.850000f;
      tapHopMau.danhSach[15] = 1.000000f;
      // ----
      tapHopMau.danhSach[16] = 0.950000f;
      tapHopMau.danhSach[17] = 1.000000f;
      tapHopMau.danhSach[18] = 1.000000f;
      tapHopMau.danhSach[19] = 1.000000f;
      // ----
      tapHopMau.danhSach[20] = tapHopMau.danhSach[0];
      tapHopMau.danhSach[21] = tapHopMau.danhSach[1];
      tapHopMau.danhSach[22] = tapHopMau.danhSach[2];
      tapHopMau.danhSach[23] = tapHopMau.danhSach[3];
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }
   
   return tapHopMau;
}

TapHopMau datMauCamHongTim() {

   TapHopMau tapHopMau;
   tapHopMau.soLuongMau = 11;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
      
      tapHopMau.danhSach[0] = 1.000000f;
      tapHopMau.danhSach[1] = 1.000000f;
      tapHopMau.danhSach[2] = 1.000000f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 1.000000f;
      tapHopMau.danhSach[5] = 0.850000f;
      tapHopMau.danhSach[6] = 0.650000f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 1.000000f;
      tapHopMau.danhSach[9] = 0.700000f;
      tapHopMau.danhSach[10] = 0.000000f;
      tapHopMau.danhSach[11] = 1.000000f;
      // ----
      tapHopMau.danhSach[12] = 1.000000f;
      tapHopMau.danhSach[13] = 0.912000f;
      tapHopMau.danhSach[14] = 0.970000f;
      tapHopMau.danhSach[15] = 1.000000f;
      // ----
      tapHopMau.danhSach[16] = 1.000000f;
      tapHopMau.danhSach[17] = 0.750000f;
      tapHopMau.danhSach[18] = 0.900000f;
      tapHopMau.danhSach[19] = 1.000000f;
      // ----
      tapHopMau.danhSach[20] = 1.000000f;
      tapHopMau.danhSach[21] = 0.500000f;
      tapHopMau.danhSach[22] = 0.730000f;
      tapHopMau.danhSach[23] = 1.000000f;
      // ----
      tapHopMau.danhSach[24] = 1.000000f;
      tapHopMau.danhSach[25] = 0.925000f;
      tapHopMau.danhSach[26] = 0.970000f;
      tapHopMau.danhSach[27] = 1.000000f;
      // ----
      tapHopMau.danhSach[28] = 0.915000f;
      tapHopMau.danhSach[29] = 0.700000f;
      tapHopMau.danhSach[30] = 0.905000f;
      tapHopMau.danhSach[31] = 1.000000f;
      // ----
      tapHopMau.danhSach[32] = 0.755000f;
      tapHopMau.danhSach[33] = 0.600000f;
      tapHopMau.danhSach[34] = 0.905000f;
      tapHopMau.danhSach[35] = 1.000000f;
      // ----
      tapHopMau.danhSach[36] = 0.405000f;
      tapHopMau.danhSach[37] = 0.215000f;
      tapHopMau.danhSach[38] = 0.675000f;
      tapHopMau.danhSach[39] = 1.000000f;
      // ----
      tapHopMau.danhSach[40] = tapHopMau.danhSach[0];
      tapHopMau.danhSach[41] = tapHopMau.danhSach[1];
      tapHopMau.danhSach[42] = tapHopMau.danhSach[2];
      tapHopMau.danhSach[43] = tapHopMau.danhSach[3];
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }
   
   return tapHopMau;
}


TapHopMau datMauSoCoLa() {
   
   TapHopMau tapHopMau;
   tapHopMau.soLuongMau = 8;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
      tapHopMau.danhSach[0] = 1.000000f;
      tapHopMau.danhSach[1] = 1.000000f;
      tapHopMau.danhSach[2] = 0.900000f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 0.400000f;
      tapHopMau.danhSach[5] = 0.100000f;
      tapHopMau.danhSach[6] = 0.000000f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 0.120000f;
      tapHopMau.danhSach[9] = 0.050000f;
      tapHopMau.danhSach[10] = 0.000000f;
      tapHopMau.danhSach[11] = 1.000000f;
      // ----
      tapHopMau.danhSach[12] = 0.700000f;
      tapHopMau.danhSach[13] = 0.500000f;
      tapHopMau.danhSach[14] = 0.300000f;
      tapHopMau.danhSach[15] = 1.000000f;
      // ----
      tapHopMau.danhSach[16] = 0.600000f;
      tapHopMau.danhSach[17] = 0.300000f;
      tapHopMau.danhSach[18] = 0.200000f;
      tapHopMau.danhSach[19] = 1.000000f;
      // ----
      tapHopMau.danhSach[20] = 0.950000f;
      tapHopMau.danhSach[21] = 0.600000f;
      tapHopMau.danhSach[22] = 0.000000f;
      tapHopMau.danhSach[23] = 1.000000f;
      // ----
      tapHopMau.danhSach[24] = 1.000000f;
      tapHopMau.danhSach[25] = 0.750000f;
      tapHopMau.danhSach[26] = 0.800000f;
      tapHopMau.danhSach[27] = 1.000000f;
      // ----
      tapHopMau.danhSach[28] = tapHopMau.danhSach[0];
      tapHopMau.danhSach[29] = tapHopMau.danhSach[1];
      tapHopMau.danhSach[30] = tapHopMau.danhSach[2];
      tapHopMau.danhSach[31] = tapHopMau.danhSach[3];
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }
   
   return tapHopMau;
}

TapHopMau datMauRungNhietDoi() {
   
   TapHopMau tapHopMau;
   tapHopMau.soLuongMau = 10;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
   
      tapHopMau.danhSach[0] = 1.000000f;
      tapHopMau.danhSach[1] = 1.000000f;
      tapHopMau.danhSach[2] = 1.000000f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 0.730000f;
      tapHopMau.danhSach[5] = 0.918000f;
      tapHopMau.danhSach[6] = 0.305000f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 0.523000f;
      tapHopMau.danhSach[9] = 0.758000f;
      tapHopMau.danhSach[10] = 0.000000f;
      tapHopMau.danhSach[11] = 1.000000f;
      // ----
      tapHopMau.danhSach[12] = 1.000000f;
      tapHopMau.danhSach[13] = 0.973000f;
      tapHopMau.danhSach[14] = 0.901700f;
      tapHopMau.danhSach[15] = 1.000000f;
      // ----
      tapHopMau.danhSach[16] = 0.004000f;
      tapHopMau.danhSach[17] = 0.920000f;
      tapHopMau.danhSach[18] = 0.435000f;
      tapHopMau.danhSach[19] = 1.000000f;
      // ----
      tapHopMau.danhSach[20] = 0.004000f;
      tapHopMau.danhSach[21] = 0.534000f;
      tapHopMau.danhSach[22] = 0.435000f;
      tapHopMau.danhSach[23] = 1.000000f;
      // ----
      tapHopMau.danhSach[24] = 0.832000f;
      tapHopMau.danhSach[25] = 1.000000f;
      tapHopMau.danhSach[26] = 0.911000f;
      tapHopMau.danhSach[27] = 1.000000f;
      // ----
      tapHopMau.danhSach[28] = 0.000000f;
      tapHopMau.danhSach[29] = 0.783000f;
      tapHopMau.danhSach[30] = 0.759000f;
      tapHopMau.danhSach[31] = 1.000000f;
      // ----
      tapHopMau.danhSach[32] = 0.000000f;
      tapHopMau.danhSach[33] = 0.455300f;
      tapHopMau.danhSach[34] = 0.653000f;
      tapHopMau.danhSach[35] = 1.000000f;
      // ----
      tapHopMau.danhSach[36] = tapHopMau.danhSach[0];
      tapHopMau.danhSach[37] = tapHopMau.danhSach[1];
      tapHopMau.danhSach[38] = tapHopMau.danhSach[2];
      tapHopMau.danhSach[39] = tapHopMau.danhSach[3];
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }
   
   return tapHopMau;
}

TapHopMau datMauVatDen() {
   
   TapHopMau tapHopMau;
   tapHopMau.soLuongMau = 7;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
      tapHopMau.danhSach[0] = 0.000000f;
      tapHopMau.danhSach[1] = 0.000000f;
      tapHopMau.danhSach[2] = 0.000000f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 0.980000f;
      tapHopMau.danhSach[5] = 0.150000f;
      tapHopMau.danhSach[6] = 0.000000f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 1.000000f;
      tapHopMau.danhSach[9] = 0.650000f;
      tapHopMau.danhSach[10] = 0.000000f;
      tapHopMau.danhSach[11] = 1.000000f;
      // ----
      tapHopMau.danhSach[12] = 1.000000f;
      tapHopMau.danhSach[13] = 1.000000f;
      tapHopMau.danhSach[14] = 1.000000f;
      tapHopMau.danhSach[15] = 1.000000f;
      // ----
      tapHopMau.danhSach[16] = 0.800000f;
      tapHopMau.danhSach[17] = 0.850000f;
      tapHopMau.danhSach[18] = 1.000000f;
      tapHopMau.danhSach[19] = 1.000000f;
      // ----
      tapHopMau.danhSach[20] = 0.300000f;
      tapHopMau.danhSach[21] = 0.050000f;
      tapHopMau.danhSach[22] = 0.000000f;
      tapHopMau.danhSach[23] = 1.000000f;
      // ----
      tapHopMau.danhSach[24] = tapHopMau.danhSach[0];
      tapHopMau.danhSach[25] = tapHopMau.danhSach[1];
      tapHopMau.danhSach[26] = tapHopMau.danhSach[2];
      tapHopMau.danhSach[27] = tapHopMau.danhSach[3];
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }
   
   return tapHopMau;
}

TapHopMau datMauDoVangTim() {
   TapHopMau tapHopMau;
   tapHopMau.soLuongMau = 10;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
      tapHopMau.danhSach[0] = 0.350000f;
      tapHopMau.danhSach[1] = 0.002000f;
      tapHopMau.danhSach[2] = 0.055000f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 0.892000f;
      tapHopMau.danhSach[5] = 0.007000f;
      tapHopMau.danhSach[6] = 0.571000f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 0.9000000f;
      tapHopMau.danhSach[9] = 0.792000f;
      tapHopMau.danhSach[10] = 0.850000f;
      tapHopMau.danhSach[11] = 1.000000f;
      // ----
      tapHopMau.danhSach[12] = 0.450000f;
      tapHopMau.danhSach[13] = 0.400000f;
      tapHopMau.danhSach[14] = 0.000000f;
      tapHopMau.danhSach[15] = 1.000000f;
      // ----
      tapHopMau.danhSach[16] = 1.000000f;
      tapHopMau.danhSach[17] = 0.920000f;
      tapHopMau.danhSach[18] = 0.000000f;
      tapHopMau.danhSach[19] = 1.000000f;
      // ----
      tapHopMau.danhSach[20] = 1.000000f;
      tapHopMau.danhSach[21] = 1.000000f;
      tapHopMau.danhSach[22] = 0.814000f;
      tapHopMau.danhSach[23] = 1.000000f;
      // ----
      tapHopMau.danhSach[24] = 0.150000f;
      tapHopMau.danhSach[25] = 0.005000f;
      tapHopMau.danhSach[26] = 0.350000f;
      tapHopMau.danhSach[27] = 1.000000f;
      // ----
      tapHopMau.danhSach[28] = 0.600000f;
      tapHopMau.danhSach[29] = 0.000000f;
      tapHopMau.danhSach[30] = 1.000000f;
      tapHopMau.danhSach[31] = 1.000000f;
      // ----
      tapHopMau.danhSach[32] = 0.879000f;
      tapHopMau.danhSach[33] = 0.852000f;
      tapHopMau.danhSach[34] = 1.000000f;
      tapHopMau.danhSach[35] = 1.000000f;
      // ----
      tapHopMau.danhSach[36] = tapHopMau.danhSach[0];
      tapHopMau.danhSach[37] = tapHopMau.danhSach[1];
      tapHopMau.danhSach[38] = tapHopMau.danhSach[2];
      tapHopMau.danhSach[39] = tapHopMau.danhSach[3];
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }
   
   return tapHopMau;
}

TapHopMau datMauKimLoai() {

   TapHopMau tapHopMau;
   tapHopMau.soLuongMau = 10;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
      tapHopMau.danhSach[0] = 0.965661f;
      tapHopMau.danhSach[1] = 0.958349f;
      tapHopMau.danhSach[2] = 0.800000f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 0.963224f;
      tapHopMau.danhSach[5] = 0.760908f;
      tapHopMau.danhSach[6] = 0.000396f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 0.495216f;
      tapHopMau.danhSach[9] = 0.331901f;
      tapHopMau.danhSach[10] = 0.000396f;
      tapHopMau.danhSach[11] = 1.000000f;
      // ----
      tapHopMau.danhSach[12] = 1.000000f;
      tapHopMau.danhSach[13] = 1.000000f;
      tapHopMau.danhSach[14] = 1.000000f;
      tapHopMau.danhSach[15] = 1.000000f;
      // ----
      tapHopMau.danhSach[16] = 0.894973f;
      tapHopMau.danhSach[17] = 0.617093f;
      tapHopMau.danhSach[18] = 0.483029f;
      tapHopMau.danhSach[19] = 1.000000f;
      // ----
      tapHopMau.danhSach[20] = 0.548842f;
      tapHopMau.danhSach[21] = 0.353839f;
      tapHopMau.danhSach[22] = 0.224650f;
      tapHopMau.danhSach[23] = 1.000000f;
      // ----
      tapHopMau.danhSach[24] = 1.000000f;
      tapHopMau.danhSach[25] = 1.000000f;
      tapHopMau.danhSach[26] = 1.000000f;
      tapHopMau.danhSach[27] = 1.000000f;
      // ----
      tapHopMau.danhSach[28] = 0.800000f;
      tapHopMau.danhSach[29] = 0.800000f;
      tapHopMau.danhSach[30] = 0.843784f;
      tapHopMau.danhSach[31] = 1.000000f;
      // ----
      tapHopMau.danhSach[32] = 0.370902f;
      tapHopMau.danhSach[33] = 0.366027f;
      tapHopMau.danhSach[34] = 0.456216f;
      tapHopMau.danhSach[35] = 1.000000f;
      // ----
      tapHopMau.danhSach[36] = tapHopMau.danhSach[0];
      tapHopMau.danhSach[37] = tapHopMau.danhSach[1];
      tapHopMau.danhSach[38] = tapHopMau.danhSach[2];
      tapHopMau.danhSach[39] = tapHopMau.danhSach[3];
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }
   
   return tapHopMau;

}

TapHopMau datMauRauCau() {  // bầu trời sa mạc
   
   TapHopMau tapHopMau;
   tapHopMau.soLuongMau = 12;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
      tapHopMau.danhSach[0] = 0.868160f;
      tapHopMau.danhSach[1] = 0.819409f;
      tapHopMau.danhSach[2] = 0.741408f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 0.500000f;
      tapHopMau.danhSach[5] = 0.353839f;
      tapHopMau.danhSach[6] = 0.231962f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 1.000000f;
      tapHopMau.danhSach[9] = 1.000000f;
      tapHopMau.danhSach[10] = 1.000000f;
      tapHopMau.danhSach[11] = 1.000000f;
      // ----
      tapHopMau.danhSach[12] = 0.800000f;
      tapHopMau.danhSach[13] = 0.631718f;
      tapHopMau.danhSach[14] = 0.663406f;
      tapHopMau.danhSach[15] = 1.000000f;
      // ----
      tapHopMau.danhSach[16] = 0.800000f;
      tapHopMau.danhSach[17] = 0.283151f;
      tapHopMau.danhSach[18] = 0.663406f;
      tapHopMau.danhSach[19] = 1.000000f;
      // ----
      tapHopMau.danhSach[20] = 0.982724f;
      tapHopMau.danhSach[21] = 0.885222f;
      tapHopMau.danhSach[22] = 0.938848f;
      tapHopMau.danhSach[23] = 1.000000f;
      // ----
      tapHopMau.danhSach[24] = 0.721907f;
      tapHopMau.danhSach[25] = 0.585405f;
      tapHopMau.danhSach[26] = 0.877910f;
      tapHopMau.danhSach[27] = 1.000000f;
      // ----
      tapHopMau.danhSach[28] = 0.721907f;
      tapHopMau.danhSach[29] = 0.205149f;
      tapHopMau.danhSach[30] = 0.877910f;
      tapHopMau.danhSach[31] = 1.000000f;
      // ----
      tapHopMau.danhSach[32] = 0.921785f;
      tapHopMau.danhSach[33] = 0.899848f;
      tapHopMau.danhSach[34] = 0.968099f;
      tapHopMau.danhSach[35] = 1.000000f;
      // ----
      tapHopMau.danhSach[36] = 0.502529f;
      tapHopMau.danhSach[37] = 0.795034f;
      tapHopMau.danhSach[38] = 0.405027f;
      tapHopMau.danhSach[39] = 1.000000f;
      // ----
      tapHopMau.danhSach[40] = 0.319714f;
      tapHopMau.danhSach[41] = 0.607343f;
      tapHopMau.danhSach[42] = 0.261213f;
      tapHopMau.danhSach[43] = 1.000000f;
      // ----
      tapHopMau.danhSach[44] = tapHopMau.danhSach[0];
      tapHopMau.danhSach[45] = tapHopMau.danhSach[1];
      tapHopMau.danhSach[46] = tapHopMau.danhSach[2];
      tapHopMau.danhSach[47] = tapHopMau.danhSach[3];
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }
   
   return tapHopMau;
}


TapHopMau datMauBauTroiSaMac() {  // bầu trời sa mạc

   TapHopMau tapHopMau;
   tapHopMau.soLuongMau = 11;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
      tapHopMau.danhSach[0] = 0.000000f;
      tapHopMau.danhSach[1] = 0.400000f;
      tapHopMau.danhSach[2] = 1.000000f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 0.300000f;
      tapHopMau.danhSach[5] = 0.800000f;
      tapHopMau.danhSach[6] = 1.000000f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 1.000000f;
      tapHopMau.danhSach[9] = 0.950000f;
      tapHopMau.danhSach[10] = 0.900000f;
      tapHopMau.danhSach[11] = 1.000000f;
      // ----
      tapHopMau.danhSach[12] = 1.000000f;
      tapHopMau.danhSach[13] = 0.800000f;
      tapHopMau.danhSach[14] = 0.500000f;
      tapHopMau.danhSach[15] = 1.000000f;
      // ----
      tapHopMau.danhSach[16] = 1.000000f;
      tapHopMau.danhSach[17] = 0.700000f;
      tapHopMau.danhSach[18] = 0.650000f;
      tapHopMau.danhSach[19] = 1.000000f;
      // ----
      tapHopMau.danhSach[20] = 0.800000f;
      tapHopMau.danhSach[21] = 0.150000f;
      tapHopMau.danhSach[22] = 0.200000f;
      tapHopMau.danhSach[23] = 1.000000f;
      // ----
      tapHopMau.danhSach[24] = 0.500000f;
      tapHopMau.danhSach[25] = 0.150000f;
      tapHopMau.danhSach[26] = 0.200000f;
      tapHopMau.danhSach[27] = 1.000000f;
      // ----
      tapHopMau.danhSach[28] = 0.500000f;
      tapHopMau.danhSach[29] = 0.150000f;
      tapHopMau.danhSach[30] = 0.600000f;
      tapHopMau.danhSach[31] = 1.000000f;
      // ----
      tapHopMau.danhSach[32] = 1.000000f;
      tapHopMau.danhSach[33] = 0.800000f;
      tapHopMau.danhSach[34] = 0.100000f;
      tapHopMau.danhSach[35] = 1.000000f;
      // ----
      tapHopMau.danhSach[36] = 1.000000f;
      tapHopMau.danhSach[37] = 1.000000f;
      tapHopMau.danhSach[38] = 0.700000f;
      tapHopMau.danhSach[39] = 1.000000f;
      // ----
      tapHopMau.danhSach[40] = tapHopMau.danhSach[0];
      tapHopMau.danhSach[41] = tapHopMau.danhSach[1];
      tapHopMau.danhSach[42] = tapHopMau.danhSach[2];
      tapHopMau.danhSach[43] = tapHopMau.danhSach[3];
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }
   
   return tapHopMau;
}

TapHopMau datMauBauTroiSaMac2() {  // bầu trời sa mạc 2
   
   TapHopMau tapHopMau;
   tapHopMau.soLuongMau = 8;
   tapHopMau.danhSach = malloc( tapHopMau.soLuongMau*sizeof(float) << 2 );
   if( tapHopMau.danhSach ) {
      tapHopMau.danhSach[0] = 0.000000f;
      tapHopMau.danhSach[1] = 0.286000f;
      tapHopMau.danhSach[2] = 0.769000f;
      tapHopMau.danhSach[3] = 1.000000f;
      // ----
      tapHopMau.danhSach[4] = 0.321000f;
      tapHopMau.danhSach[5] = 0.854000f;
      tapHopMau.danhSach[6] = 1.000000f;
      tapHopMau.danhSach[7] = 1.000000f;
      // ----
      tapHopMau.danhSach[8] = 0.623000f;
      tapHopMau.danhSach[9] = 0.239000f;
      tapHopMau.danhSach[10] = 0.000000f;
      tapHopMau.danhSach[11] = 1.000000f;
      // ----
      tapHopMau.danhSach[12] = 0.957000f;
      tapHopMau.danhSach[13] = 0.455000f;
      tapHopMau.danhSach[14] = 0.000000f;
      tapHopMau.danhSach[15] = 1.000000f;
      // ----
      tapHopMau.danhSach[16] = 0.423000f;
      tapHopMau.danhSach[17] = 0.195000f;
      tapHopMau.danhSach[18] = 0.416000f;
      tapHopMau.danhSach[19] = 1.000000f;
      // ----
      tapHopMau.danhSach[20] = 0.616000f;
      tapHopMau.danhSach[21] = 0.376000f;
      tapHopMau.danhSach[22] = 0.600000f;
      tapHopMau.danhSach[23] = 1.000000f;
      // ----
      tapHopMau.danhSach[24] = 0.000000f;
      tapHopMau.danhSach[25] = 0.486000f;
      tapHopMau.danhSach[26] = 0.784000f;
      tapHopMau.danhSach[27] = 1.000000f;
      // ----
      tapHopMau.danhSach[28] = tapHopMau.danhSach[0];
      tapHopMau.danhSach[29] = tapHopMau.danhSach[1];
      tapHopMau.danhSach[30] = tapHopMau.danhSach[2];
      tapHopMau.danhSach[31] = tapHopMau.danhSach[3];
   }
   else {
      printf( "Mau: có vận đề tạo tập hợp màu\n" );
   }
   
   return tapHopMau;
}


#pragma mark ---- Tô Màu
/* Tô Màu */
void toDiemAnhDungGiaTri( float giaTri, TapHopMau *tapHopMau, unsigned char *mauDiemAnh ) {
   
   float phanSo = fmodf( giaTri, 1.0f );
   float nghichPhanSo = 1.0f - phanSo;
   unsigned short vanh = (giaTri - phanSo);
//   printf( "Mau: giaTri %5.3f  phanSo %5.3f vanh %d\n", giaTri, phanSo, vanh );

   unsigned char soLuongMauTrongTap = tapHopMau->soLuongMau;
   // ---- hạn chế phạm vi
   vanh %= (soLuongMauTrongTap - 1);
   
   float *mau0 = &(tapHopMau->danhSach[vanh << 2]);
   float *mau1 = &(tapHopMau->danhSach[(vanh + 1) << 2]);
   

   float mauDo = mau0[0]*nghichPhanSo + mau1[0]*phanSo;
   float mauLuc = mau0[1]*nghichPhanSo + mau1[1]*phanSo;
   float mauXanh = mau0[2]*nghichPhanSo + mau1[2]*phanSo;
   float mauDuc = mau0[3]*nghichPhanSo + mau1[3]*phanSo;
   
   // --- đổi cho PNG 8 bit từng kênh
   mauDiemAnh[0] = mauDo*255;
   mauDiemAnh[1] = mauLuc*255;
   mauDiemAnh[2] = mauXanh*255;
   mauDiemAnh[3] = mauDuc*255;
}

void xoaTapHopMau( TapHopMau *tapHopMau ) {
   
   tapHopMau->soLuongMau = 0;
   free( tapHopMau->danhSach );
}