// Khởi động 2021.01.14
// Thiết kế để làm phim Sóng Tròn
// Phim mặc định có khổ 4096 x 2160 điểm ảnh
// Lệnh Ví Dụ: <bềRộngẢnh> <bềCaoẢnh> <sốHạt> <sốLượngHoạtHình> <sốTậpHợpMàu> <sốLặpLạiMàu>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "PNG.h"
#include "Mau.h"


#define kBE_CAO_ANH__MAC_DINH   2160
#define kBE_RONG_ANH__MAC_DINH  4096
#define kSO_LUONG__HOAT_HINH_TOI_DA 256
#define kSO_TAP_HOP_MAU__MAC_DINH   0
#define kSO_LAI_MAU__MAC_DINH       1


// ---- XOÁY
typedef struct {
   float x;
   float y;
   float suc;
   float tanSo;
   float giam;
} Xoay;


void tinhAnh( float *mangKetQua, unsigned short beRongAnh, unsigned short beCaoAnh, float trungTamX, float trungTamY, float buoc );
//unsigned int mauCuaGiaTri( unsigned char giaTri );

// ---- màu float
void mauCuaGiaTriFloat( float giaTri, float *mau );



int main( int argc, char **argv ) {
   
   // ---- phân tích tha số
   unsigned short beRongAnh = kBE_RONG_ANH__MAC_DINH;
   unsigned short beCaoAnh = kBE_CAO_ANH__MAC_DINH;
   unsigned int hatNgauNhien = 0;
   unsigned short hoatHinhToiDa = kSO_LUONG__HOAT_HINH_TOI_DA;
   unsigned char soTapMau = kSO_TAP_HOP_MAU__MAC_DINH;
   unsigned char soLapLaiMau = kSO_LAI_MAU__MAC_DINH;
   
   if( argc > 2) {
      sscanf( argv[1], "%hi", &beRongAnh );
      sscanf( argv[2], "%hi", &beCaoAnh );
      
      // ----
      if( beRongAnh < 512 )
         beRongAnh = 512;
      
      if( beCaoAnh < 256 )
         beCaoAnh = 256;
   }
   else {
      printf( "Lệnh Ví Dụ: <bềRộngẢnh> <bềCaoẢnh> <sốHạt> <sốLượngHoạtHình> <sốTậpHợpMàu> <sốLặpLạiMàu>\n" );
      printf( "    Ví Dụ:./SongXoay 4096 2160 3 24 5 1\n" );
      printf( "          ./songXoay 1024 512 45 2 8 1\n" );
      exit(0);
   }
   
   // ---- tham số không yêu cầu
   // ---- hạt số ngẫu nhiên
   if( argc > 3 ) {
      sscanf( argv[3], "%u", &hatNgauNhien );
   }

   // ---- số lượng hoạt hình tối đa
   if( argc > 4 ) {
      sscanf( argv[4], "%hu", &hoatHinhToiDa );
      
      // ---- số lượng hoạt hình tối thiểu
      if( hoatHinhToiDa < 16 ) {
         hoatHinhToiDa = 16;
      }
   }

   // ---- số tập hợp màu
   if( argc > 5 ) {
      sscanf( argv[5], "%hhu", &soTapMau );
      
      if( soTapMau > SO_LUONG__TAP_HOP_MAU )
         soTapMau = MAU__XAM;
   }
   
   // ---- số lặp lại màu
   if( argc > 6 ) {
      sscanf( argv[6], "%hhu", &soLapLaiMau );
      
      if( soLapLaiMau > 4 )
         soLapLaiMau = 4;
      else if( soLapLaiMau < 1 )
         soLapLaiMau = 1;
   }
   
   // ----
   printf( " Khổ: %d x %d\n", beRongAnh, beCaoAnh );
   printf( " Số hạt: %d\n", hatNgauNhien );
   printf( " Số hoạt hình: %d\n", hoatHinhToiDa );
   printf( " Số tập hợp màu: %d\n", soTapMau );
   printf( " Số lần lặp màu: %d\n", soLapLaiMau );
   

   // ---- mảng chứa kết qủa
   float *mangKetQua = malloc( beRongAnh*beCaoAnh*sizeof( float ) );
   
   if( mangKetQua ) {
      
      // ---- xóa kết qủa
      unsigned int diaChi = 0;
      unsigned int diaChiCuoi =  beRongAnh*beCaoAnh;
      while( diaChi < diaChiCuoi ) {
         mangKetQua[diaChi] = 0.0f;
         diaChi++;
      }
      
      // ==== tạo mảng xoáy
      srand( hatNgauNhien );
      Xoay mangXoay[10];
      unsigned char soLuongXoay = rand() & 0x7;
      
      unsigned char chiSoXoay = 0;
      while( chiSoXoay < soLuongXoay ) {
      
         // ---- vị trí [x: -1.5 ... 1.5   y: -1.5 ... 1.5]
         short ngauNhien = (rand() & 0xfff) - 2048;
         mangXoay[chiSoXoay].x = 1.5f*((float)ngauNhien/2048.0f);
         ngauNhien = (rand() & 0xfff) - 2048;
         mangXoay[chiSoXoay].y = 1.5f*((float)ngauNhien/2048.0f);
         
         // ---- sức [0.0 ... 1.0]
         ngauNhien = rand() & 0xfff;
         mangXoay[chiSoXoay].suc = (float)ngauNhien/4096.0f;
         
         // ---- tần số [10 ... 100]
         ngauNhien = rand() & 0xfff;
         mangXoay[chiSoXoay].tanSo = 10.0f + 90.0f*((float)ngauNhien/4096.0f);
         
         // ---- giảm [1.0 ... 4.0]
         ngauNhien = rand() & 0xfff;
         mangXoay[chiSoXoay].giam = 0.05f + 0.5f*((float)ngauNhien/4096.0f);
   
         printf( "%d (%5.3f; %5.3f) suc %5.3f  tanSo %5.3f\n", chiSoXoay, mangXoay[chiSoXoay].x, mangXoay[chiSoXoay].y, mangXoay[chiSoXoay].suc, mangXoay[chiSoXoay].tanSo );
         chiSoXoay++;
      }

      // ==== quét qua ảnh
      float buoc = 2.0f/(float)beCaoAnh;
      float nuaBeCaoAnh = (float)(beCaoAnh >> 1);
      float y = -1.0f;
      
      // ---- chia số lượng xoáy
      float phongToXoay = 1.0f/(float)soLuongXoay;

      unsigned short hangAnh = 0;
      diaChi = 0;
      
      /*
      • Giữ góc được tính trong phạm vi 0 đến 2π
      • Xong đơn vị hóa bời 2π cho 'đơn vị hóa' góc cho tô màu
      */

      while( hangAnh < beCaoAnh ) {
         float x = -(float)(beRongAnh >> 1)/nuaBeCaoAnh;

         printf( "  Hàng ảnh: %d/%d\n", hangAnh, beCaoAnh );
         unsigned short cotAnh = 0;
         
         while( cotAnh < beRongAnh ) {
            
            unsigned char chiSoXoay = 0;
            float ketQua = 0.0f;
            while( chiSoXoay < soLuongXoay ) {
               // ---- cách bình
               float cachX = x - mangXoay[chiSoXoay].x;
               float cachY = y - mangXoay[chiSoXoay].y;
               float banKinh = sqrtf( cachX*cachX + cachY*cachY );
               
               float goc = 0.0f;
               if( cachX != 0.0f )
                  goc = atanf( cachY/cachX );

               float suc = mangXoay[chiSoXoay].suc;
               float tanSo = mangXoay[chiSoXoay].tanSo;
               float giam = mangXoay[chiSoXoay].giam;
               
               // ---- hạn chế phạm vi góc 0 ≤ góc ≤ 2π
               if( cachX < 0.0 )
                  goc = 3.1415927f + goc;
               else {
                  if( cachY < 0.0f)
                     goc += 6.2831853f;
               }
               
               goc += suc*phongToXoay * sinf( banKinh*tanSo )* expf(-banKinh*giam);
               
               // ---- hạn chế phạm vi góc 0 ≤ góc ≤ 2π
               if( goc < 0.0f )
                  goc += 6.2831853f;
               else if( goc > 6.2831853f )
                  goc -= 6.2831853f;
               

               ketQua += goc;
               chiSoXoay++;
            }
            
            // ---- đơn vị hóa 'góc kết qủa'
            mangKetQua[diaChi] = ketQua/6.2831853f;

            diaChi++;
            cotAnh++;
            x += buoc;
         }

         hangAnh++;
         y += buoc;
      }
//      exit(0);
      // ==== vẽ ảnh
      unsigned char *anh = malloc( beRongAnh*beCaoAnh << 2 );
      if( anh ) {

         // ==== CHỌN TẬP HỘP MÀU
         TapHopMau tapHopMau = datMauXam();

         if( soTapMau == MAU__HOA_HONG_VA_XANH )
            tapHopMau = datMauHoaHongVaXanh();
         else if( soTapMau == MAU__DAI_DUONG )
            tapHopMau = datMauDaiDuong();
         else if( soTapMau == MAU__CAM_HONG_TIM )
            tapHopMau = datMauCamHongTim();
         else if( soTapMau == MAU__SO_CO_LA )
            tapHopMau = datMauSoCoLa();
         else if( soTapMau == MAU__RUNG_NHIET_DOI )
            tapHopMau = datMauRungNhietDoi();
         else if( soTapMau == MAU__VAT_DEN )
            tapHopMau = datMauVatDen();
         else if( soTapMau == MAU__DO_VANG_TIM )
            tapHopMau = datMauDoVangTim();
         else if( soTapMau == MAU__KIM_LOAI )
            tapHopMau = datMauKimLoai();
         else if( soTapMau == MAU__RAU_CAU )
            tapHopMau = datMauRauCau();
         else if( soTapMau == MAU__BAU_TROI_SA_MAC )
            tapHopMau = datMauBauTroiSaMac();
         else if( soTapMau == MAU__BAU_TROI_SA_MAC_2 )
            tapHopMau = datMauBauTroiSaMac2();
         
         // ---- hệ số nhân màu
         float heSoNhanMau = (float)(tapHopMau.soLuongMau - 1);

         float thoiGian = 0.0f;
         float buocThoiGian = heSoNhanMau/(float)hoatHinhToiDa;
         unsigned int soHoatHinh = 0;
         while( soHoatHinh < hoatHinhToiDa ) {
            
            unsigned int diaChiCuoi = beRongAnh*beCaoAnh;
            unsigned int diaChi = 0;
            unsigned int diaChiAnh = 0;
            
            unsigned short soHang = 0;  // <---- bỏ sau không cần
            
            while( diaChi < diaChiCuoi ) {
               float giaTri = fmodf( mangKetQua[diaChi]*(float)soLapLaiMau, 1.0f );

               unsigned char mauDiemAnh[4];
               toDiemAnhDungGiaTri( giaTri*heSoNhanMau + thoiGian, &tapHopMau, mauDiemAnh );  // số 10.0f giúp bảo đảm giá tri > 0
               
               // ---- tô điểm ảnh
               anh[diaChiAnh] = mauDiemAnh[0];
               anh[diaChiAnh+1] = mauDiemAnh[1];
               anh[diaChiAnh+2] = mauDiemAnh[2];
               anh[diaChiAnh+3] = mauDiemAnh[3];
               /*
               if( (diaChiAnh % (kBE_RONG_ANH*4)) == 0 ) {
                  printf( "%d giaTri %5.3f  mau %d %d %d\n", soHang, giaTri, mauDiemAnh[0], mauDiemAnh[1], mauDiemAnh[2] );
                  soHang++;
               }
               else if(diaChiAnh < (kBE_RONG_ANH*4) ) {
                  printf( "%d giaTri %5.3f  mau %d %d %d\n", diaChiAnh >> 2, giaTri, mauDiemAnh[0], mauDiemAnh[1], mauDiemAnh[2] );
               } */
               
               diaChiAnh += 4;
               diaChi++;
            }

            // ==== Lưu Ảnh
            char tenTep[255];
            sprintf( tenTep, "SongXoay_%04d.png", soHoatHinh );
            luuAnhPNG_BGRO( tenTep, anh, beRongAnh, beCaoAnh );
            printf( "Dã lưu tệp: %s\n", tenTep );

            // ---- ảnh kế tiếp
            thoiGian += buocThoiGian;
            soHoatHinh++;
         }
         free( anh );
         xoaTapHopMau( &tapHopMau );
      }
      else {
         printf( "Vấn đề giành trí nhớ cho tạo ảnh!\n" ); 
      }
      
      // --- thả trí nhớ
      free( mangKetQua );
      
   }
   else {
      printf( "Vấn đề giành trí nhớ!\n" );
      exit(0);
   }

   return 1;
}

