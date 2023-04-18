// 2021.01.16


enum {
   MAU__XAM,
   MAU__HOA_HONG_VA_XANH,
   MAU__DAI_DUONG,
   MAU__CAM_HONG_TIM,
   MAU__SO_CO_LA,
   MAU__RUNG_NHIET_DOI,
   MAU__VAT_DEN,
   MAU__DO_VANG_TIM,
   MAU__KIM_LOAI,
   MAU__RAU_CAU,
   MAU__BAU_TROI_SA_MAC,
   MAU__BAU_TROI_SA_MAC_2,
   SO_LUONG__TAP_HOP_MAU
};


// ---- Tập Hợp Màu
typedef struct {
   float *danhSach;
   unsigned char soLuongMau;
} TapHopMau;

/* Cac Tô Điểm */
TapHopMau datMauXam();
TapHopMau datMauHoaHongVaXanh();
TapHopMau datMauDaiDuong();
TapHopMau datMauCamHongTim();
TapHopMau datMauSoCoLa();
TapHopMau datMauRungNhietDoi();
TapHopMau datMauVatDen();
TapHopMau datMauDoVangTim();
TapHopMau datMauKimLoai();
TapHopMau datMauRauCau();
TapHopMau datMauBauTroiSaMac();
TapHopMau datMauBauTroiSaMac2();

/* Tô Điểm */
void toDiemAnhDungGiaTri( float giaTri, TapHopMau *tapHopMau, unsigned char *mauDiemAnh );

/* Xóa Tập Hợp */
void xoaTapHopMau( TapHopMau *tapHopMau );

