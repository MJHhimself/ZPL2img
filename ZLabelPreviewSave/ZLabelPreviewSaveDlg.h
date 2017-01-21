
// ZLabelPreviewSaveDlg.h : 헤더 파일
//

#pragma once
#include "explorer.h"
#include "afxwin.h"
#include <atlimage.h>
#include "ConnectSocket.h" 

#define ZPL1 L"^XA^LH0,0^PO^FS^FO010,030^A0,30,25^FDSUPPLIER:SK hynix^FS^PRC^FO250,010^FR^XGHALOGEN_PKT,1,1^FS^FO450,030^A0,30,30^FD^FS^FO010,060^A0,30,30^FDDEVICE     :H9CKNNN8KTARKR-NTH^FS^FO010,085^A0,35,35^FDLOT NO. :T3LCZ88D     ( 1 / 5 )^FS^BY2,2.5:1,60 ^FS^FO035,115^B3,N,40,Y,N,^FDT3LCZ88D     001^FS^FO010,180^A0,22,22^FDITEM NO :120266-069(A3-3ALSHH0F-TAI-5055)^FS^BY2,2.3:1,60 ^FS^FO035,200^B3,N,40,Y,N,^FD120266-069  960^FS^FO010,300^A0,24,24^FDDATE CODE:1524^FS^FO010,265^A0,35,35^FDQ'TY: 960 EA^FS^FO010,325^A0,24,24^FDPACK DATE:2015/06/13^FS^FO490,170^FR^XGON7PCSKH,1,1^FS^FO010,350^A0,20,20^FDASSEMBLED IN KOREA FROM WAFER FABRICATED IN KOREA^FS^FO253,265^A0,16,16^FDAdditional information^FS^FO253,280^B7N,5,2,6,1,N^FDSK hynix            H9CKNNN8KTARKR-NTH            KR_KR     960    1524   T3LCZ88D            001  ^FS^XZ^PQ"
#define ZPL2 L"~DGHALOGEN_PKT,01280,020,,:3FgSFE,3FQFE0g02,::3FJFE07FIFE0g02,3FJFC03FIFE0g02,3FJFC01FIFE0g02,3FJF800FIFE0g02,3FJF8007FC7E0g02,3FJF8003E01E0g02,3FJF8003800E0S06C0J02,3FJF80K0E3E018DF0F0J06C0J02,3FJF80K0E3E018DF1F0J060K02,3FJF80K0E367D8D8187DFDF6DF79DE2,3FJF80020H0E3E7DFDF187DADF6D14BD22,3FJFC0060H0E3E6DFDF186DADB6D14B1E2,3FJFC00E0H0E366D8C3186DADB6DF4B1E2,3FJFC00E001E367D8DF1F7DADF6D14BD02,3FJFE01F001E367D8DF0F7DADF6D149DE2,3FJFE01F003E0Q0180L02,3FKF01F007E0Q0180L02,3FKF83E00FE0Q0180L02,3FKF83E01FE0g02,3FKFC1E03FE0g02,3FKFE1C07FE0g02,3FLF801FFE330180K07C0M02,3FMF8FHFE330180K07C0M02,3FQFE337D80K060N02,3800780300FHFE3F7DBEF9F7C61DF7C0I02,38006002007FFE3F0DBEF916C7DD1440I02,380040H03C3FFE337DB6D9F6C7D9F7C0I02,38FF83FC7E3FFE337DB6D906C619040J02,38E007F8FF1FFE336DBEF906C619040J02,38E007F87F1FFE337DBEF9F6C619F7C0I02,38FFC3FC7E3FFE0L080R02,380040H03C3FFE0K0F80R02,38006002007FFE0K0F80R02,3800780300FHFE0g02,3FQFE0g02,:::3FgSFE,,::::::::::::::::::^XA^LH0,0^PO^FS^FO010,030^A0,30,25^FDSUPPLIER:SK hynix^FS^PRC^FO250,010^FR^XGHALOGEN_PKT,1,1^FS^FO450,030^A0,30,30^FD^FS^FO010,060^A0,30,30^FDDEVICE     :H9CKNNN8KTARKR-NTH^FS^FO010,085^A0,35,35^FDLOT NO. :T3LCZ88D     ( 2 / 5 )^FS^BY2,2.5:1,60 ^FS^FO035,115^B3,N,40,Y,N,^FDT3LCZ88D     002^FS^FO010,180^A0,22,22^FDITEM NO :120266-069(A3-3ALSHH0F-TAI-5055)^FS^BY2,2.3:1,60 ^FS^FO035,200^B3,N,40,Y,N,^FD120266-069  960^FS^FO010,300^A0,24,24^FDDATE CODE:1524^FS^FO010,265^A0,35,35^FDQ'TY: 960 EA^FS^FO010,325^A0,24,24^FDPACK DATE:2015/06/13^FS~DGON7PCSKH,1104,12,,O03JFC,N03LFC,N0NF,M07NFE,L01PF8,L07PFE,L0RF8,K03JF1MFC,K07JF1NF,J01KF1NF8,J03KFH0E3KFC,J07HF3HFH0638JFE,J0HFE3HF08731DJF,I01HFC3HF0C7H1C7IF8,I03FEC7HF8C70381IFC,I07F8C7HF8C703807HFE,I0HF841HF8C7070C78HF,H01HFCH07F8CF8F1C7CHF8,H01HFCH01JF0E1876HFC,H03HFE0C0IFC1F38E3HFC,H07FBE0E3IFC3HF0C3HFE,H0FE1F0OF187IF,H0FC3F87NFD8F3HF,01F8E187HFEH07IF0F1HF8001F980DIFJ07HF1F1HF8003F8H0IF8J01IFC3HFC003F808IFL0HFEH07FC007F838HFCL03HFH03FE007FCF9HF8L01HFE07FE007HFC1HFN0HFE3IF00IF83FEN07FE3IF00IF87FCN03FE7IF01LF8N01HF7IF81LF8O0LF81LFP0LF81KFEP07KF83KFEP07KFC3KFCP03KFC::3KFC01C03C07801KFC3KF801C0FE0FC01KFC3KF80360C318601KFC3KF80361803I01KFC3KF80H21803I01KFE7KF80631803I01KFE:3KF80HF98230401KFE3KF80HF8C318601KFC3KF80C18FE1FC01KFC3KF8180C7C07801KFC3KF8P01KFC3KFCP03KFC::3KFEP07KFC1KFEP07KF81LFP0LF8:1LF8N01LF80LFCN03LF00LFEN07LF00MFN0MF007LF8L01LFE007LFCL03LFE003LFEL07LFC003MF8J01MFC001MFEJ07MF8001NFCH03NF80H0gF,:H07XFE,H03XFC,:H01JFE01F01FC1KF8,I0JFE01EH0F81KF,I07IFE30E18780JFE,I03IFE38C3C780JFC,I01IFE38C7C708JF8,J0IFE38C7C7087IF,J07HFE38C2C7H07HFE,J03HFE38C206H07HFC,J01HFEH0EH0EH03HF8,K0HFE01FH063C3HF,K03FE03F8063E3FC,K01MF7JF8,L07PFE,L01PF8,M07NFE,M01NF8,N03LFC,O03JFC,Q07E,^FO490,170^FR^XGON7PCSKH,1,1^FS^FO010,350^A0,20,20^FDASSEMBLED IN KOREA FROM WAFER FABRICATED IN KOREA^FS^FO253,265^A0,16,16^FDAdditional information^FS^FO253,280^B7N,5,2,6,1,N^FDSK hynix            H9CKNNN8KTARKR-NTH            KR_KR     960    1524   T3LCZ88D            002  ^FS^XZ^PQ"
#define ZPL3 L">>>>>>>>>>~DGHALOGEN_PKT,01280,020,,:3FgSFE,3FQFE0g02,::3FJFE07FIFE0g02,3FJFC03FIFE0g02,3FJFC01FIFE0g02,3FJF800FIFE0g02,3FJF8007FC7E0g02,3FJF8003E01E0g02,3FJF8003800E0S06C0J02,3FJF80K0E3E018DF0F0J06C0J02,3FJF80K0E3E018DF1F0J060K02,3FJF80K0E367D8D8187DFDF6DF79DE2,3FJF80020H0E3E7DFDF187DADF6D14BD22,3FJFC0060H0E3E6DFDF186DADB6D14B1E2,3FJFC00E0H0E366D8C3186DADB6DF4B1E2,3FJFC00E001E367D8DF1F7DADF6D14BD02,3FJFE01F001E367D8DF0F7DADF6D149DE2,3FJFE01F003E0Q0180L02,3FKF01F007E0Q0180L02,3FKF83E00FE0Q0180L02,3FKF83E01FE0g02,3FKFC1E03FE0g02,3FKFE1C07FE0g02,3FLF801FFE330180K07C0M02,3FMF8FHFE330180K07C0M02,3FQFE337D80K060N02,3800780300FHFE3F7DBEF9F7C61DF7C0I02,38006002007FFE3F0DBEF916C7DD1440I02,380040H03C3FFE337DB6D9F6C7D9F7C0I02,38FF83FC7E3FFE337DB6D906C619040J02,38E007F8FF1FFE336DBEF906C619040J02,38E007F87F1FFE337DBEF9F6C619F7C0I02,38FFC3FC7E3FFE0L080R02,380040H03C3FFE0K0F80R02,38006002007FFE0K0F80R02,3800780300FHFE0g02,3FQFE0g02,:::3FgSFE,,::::::::::::::::::^XA^LH0,0^PO^FS^FO010,030^A0,30,25^FDSUPPLIER:SK hynix^FS^PRC^FO250,010^FR^XGHALOGEN_PKT,1,1^FS^FO450,030^A0,30,30^FD^FS^FO010,060^A0,30,30^FDDEVICE     :H9CKNNN8KTARKR-NTH^FS^FO010,085^A0,35,35^FDLOT NO. :T3LCZ88D     ( 3 / 5 )^FS^BY2,2.5:1,60 ^FS^FO035,115^B3,N,40,Y,N,^FDT3LCZ88D     003^FS^FO010,180^A0,22,22^FDITEM NO :120266-069(A3-3ALSHH0F-TAI-5055)^FS^BY2,2.3:1,60 ^FS^FO035,200^B3,N,40,Y,N,^FD120266-069  960^FS^FO010,300^A0,24,24^FDDATE CODE:1524^FS^FO010,265^A0,35,35^FDQ'TY: 960 EA^FS^FO010,325^A0,24,24^FDPACK DATE:2015/06/13^FS~DGON7PCSKH,1104,12,,O03JFC,N03LFC,N0NF,M07NFE,L01PF8,L07PFE,L0RF8,K03JF1MFC,K07JF1NF,J01KF1NF8,J03KFH0E3KFC,J07HF3HFH0638JFE,J0HFE3HF08731DJF,I01HFC3HF0C7H1C7IF8,I03FEC7HF8C70381IFC,I07F8C7HF8C703807HFE,I0HF841HF8C7070C78HF,H01HFCH07F8CF8F1C7CHF8,H01HFCH01JF0E1876HFC,H03HFE0C0IFC1F38E3HFC,H07FBE0E3IFC3HF0C3HFE,H0FE1F0OF187IF,H0FC3F87NFD8F3HF,01F8E187HFEH07IF0F1HF8001F980DIFJ07HF1F1HF8003F8H0IF8J01IFC3HFC003F808IFL0HFEH07FC007F838HFCL03HFH03FE007FCF9HF8L01HFE07FE007HFC1HFN0HFE3IF00IF83FEN07FE3IF00IF87FCN03FE7IF01LF8N01HF7IF81LF8O0LF81LFP0LF81KFEP07KF83KFEP07KFC3KFCP03KFC::3KFC01C03C07801KFC3KF801C0FE0FC01KFC3KF80360C318601KFC3KF80361803I01KFC3KF80H21803I01KFE7KF80631803I01KFE:3KF80HF98230401KFE3KF80HF8C318601KFC3KF80C18FE1FC01KFC3KF8180C7C07801KFC3KF8P01KFC3KFCP03KFC::3KFEP07KFC1KFEP07KF81LFP0LF8:1LF8N01LF80LFCN03LF00LFEN07LF00MFN0MF007LF8L01LFE007LFCL03LFE003LFEL07LFC003MF8J01MFC001MFEJ07MF8001NFCH03NF80H0gF,:H07XFE,H03XFC,:H01JFE01F01FC1KF8,I0JFE01EH0F81KF,I07IFE30E18780JFE,I03IFE38C3C780JFC,I01IFE38C7C708JF8,J0IFE38C7C7087IF,J07HFE38C2C7H07HFE,J03HFE38C206H07HFC,J01HFEH0EH0EH03HF8,K0HFE01FH063C3HF,K03FE03F8063E3FC,K01MF7JF8,L07PFE,L01PF8,M07NFE,M01NF8,N03LFC,O03JFC,Q07E,^FO490,170^FR^XGON7PCSKH,1,1^FS^FO010,350^A0,20,20^FDASSEMBLED IN KOREA FROM WAFER FABRICATED IN KOREA^FS^FO253,265^A0,16,16^FDAdditional information^FS^FO253,280^B7N,5,2,6,1,N^FDSK hynix            H9CKNNN8KTARKR-NTH            KR_KR     960    1524   T3LCZ88D            003  ^FS^XZ^PQ"
#define ZPL4 L">>>>>>>>>>~DGHALOGEN_PKT,01280,020,,:3FgSFE,3FQFE0g02,::3FJFE07FIFE0g02,3FJFC03FIFE0g02,3FJFC01FIFE0g02,3FJF800FIFE0g02,3FJF8007FC7E0g02,3FJF8003E01E0g02,3FJF8003800E0S06C0J02,3FJF80K0E3E018DF0F0J06C0J02,3FJF80K0E3E018DF1F0J060K02,3FJF80K0E367D8D8187DFDF6DF79DE2,3FJF80020H0E3E7DFDF187DADF6D14BD22,3FJFC0060H0E3E6DFDF186DADB6D14B1E2,3FJFC00E0H0E366D8C3186DADB6DF4B1E2,3FJFC00E001E367D8DF1F7DADF6D14BD02,3FJFE01F001E367D8DF0F7DADF6D149DE2,3FJFE01F003E0Q0180L02,3FKF01F007E0Q0180L02,3FKF83E00FE0Q0180L02,3FKF83E01FE0g02,3FKFC1E03FE0g02,3FKFE1C07FE0g02,3FLF801FFE330180K07C0M02,3FMF8FHFE330180K07C0M02,3FQFE337D80K060N02,3800780300FHFE3F7DBEF9F7C61DF7C0I02,38006002007FFE3F0DBEF916C7DD1440I02,380040H03C3FFE337DB6D9F6C7D9F7C0I02,38FF83FC7E3FFE337DB6D906C619040J02,38E007F8FF1FFE336DBEF906C619040J02,38E007F87F1FFE337DBEF9F6C619F7C0I02,38FFC3FC7E3FFE0L080R02,380040H03C3FFE0K0F80R02,38006002007FFE0K0F80R02,3800780300FHFE0g02,3FQFE0g02,:::3FgSFE,,::::::::::::::::::^XA^LH0,0^PO^FS^FO010,030^A0,30,25^FDSUPPLIER:SK hynix^FS^PRC^FO250,010^FR^XGHALOGEN_PKT,1,1^FS^FO450,030^A0,30,30^FD^FS^FO010,060^A0,30,30^FDDEVICE     :H9CKNNN8KTARKR-NTH^FS^FO010,085^A0,35,35^FDLOT NO. :T3LCZ88D     ( 4 / 5 )^FS^BY2,2.5:1,60 ^FS^FO035,115^B3,N,40,Y,N,^FDT3LCZ88D     004^FS^FO010,180^A0,22,22^FDITEM NO :120266-069(A3-3ALSHH0F-TAI-5055)^FS^BY2,2.3:1,60 ^FS^FO035,200^B3,N,40,Y,N,^FD120266-069  960^FS^FO010,300^A0,24,24^FDDATE CODE:1524^FS^FO010,265^A0,35,35^FDQ'TY: 960 EA^FS^FO010,325^A0,24,24^FDPACK DATE:2015/06/13^FS~DGON7PCSKH,1104,12,,O03JFC,N03LFC,N0NF,M07NFE,L01PF8,L07PFE,L0RF8,K03JF1MFC,K07JF1NF,J01KF1NF8,J03KFH0E3KFC,J07HF3HFH0638JFE,J0HFE3HF08731DJF,I01HFC3HF0C7H1C7IF8,I03FEC7HF8C70381IFC,I07F8C7HF8C703807HFE,I0HF841HF8C7070C78HF,H01HFCH07F8CF8F1C7CHF8,H01HFCH01JF0E1876HFC,H03HFE0C0IFC1F38E3HFC,H07FBE0E3IFC3HF0C3HFE,H0FE1F0OF187IF,H0FC3F87NFD8F3HF,01F8E187HFEH07IF0F1HF8001F980DIFJ07HF1F1HF8003F8H0IF8J01IFC3HFC003F808IFL0HFEH07FC007F838HFCL03HFH03FE007FCF9HF8L01HFE07FE007HFC1HFN0HFE3IF00IF83FEN07FE3IF00IF87FCN03FE7IF01LF8N01HF7IF81LF8O0LF81LFP0LF81KFEP07KF83KFEP07KFC3KFCP03KFC::3KFC01C03C07801KFC3KF801C0FE0FC01KFC3KF80360C318601KFC3KF80361803I01KFC3KF80H21803I01KFE7KF80631803I01KFE:3KF80HF98230401KFE3KF80HF8C318601KFC3KF80C18FE1FC01KFC3KF8180C7C07801KFC3KF8P01KFC3KFCP03KFC::3KFEP07KFC1KFEP07KF81LFP0LF8:1LF8N01LF80LFCN03LF00LFEN07LF00MFN0MF007LF8L01LFE007LFCL03LFE003LFEL07LFC003MF8J01MFC001MFEJ07MF8001NFCH03NF80H0gF,:H07XFE,H03XFC,:H01JFE01F01FC1KF8,I0JFE01EH0F81KF,I07IFE30E18780JFE,I03IFE38C3C780JFC,I01IFE38C7C708JF8,J0IFE38C7C7087IF,J07HFE38C2C7H07HFE,J03HFE38C206H07HFC,J01HFEH0EH0EH03HF8,K0HFE01FH063C3HF,K03FE03F8063E3FC,K01MF7JF8,L07PFE,L01PF8,M07NFE,M01NF8,N03LFC,O03JFC,Q07E,^FO490,170^FR^XGON7PCSKH,1,1^FS^FO010,350^A0,20,20^FDASSEMBLED IN KOREA FROM WAFER FABRICATED IN KOREA^FS^FO253,265^A0,16,16^FDAdditional information^FS^FO253,280^B7N,5,2,6,1,N^FDSK hynix            H9CKNNN8KTARKR-NTH            KR_KR     960    1524   T3LCZ88D            004  ^FS^XZ^PQ"
#define ZPL5 L">>>>>>>>>>~DGHALOGEN_PKT,01280,020,,:3FgSFE,3FQFE0g02,::3FJFE07FIFE0g02,3FJFC03FIFE0g02,3FJFC01FIFE0g02,3FJF800FIFE0g02,3FJF8007FC7E0g02,3FJF8003E01E0g02,3FJF8003800E0S06C0J02,3FJF80K0E3E018DF0F0J06C0J02,3FJF80K0E3E018DF1F0J060K02,3FJF80K0E367D8D8187DFDF6DF79DE2,3FJF80020H0E3E7DFDF187DADF6D14BD22,3FJFC0060H0E3E6DFDF186DADB6D14B1E2,3FJFC00E0H0E366D8C3186DADB6DF4B1E2,3FJFC00E001E367D8DF1F7DADF6D14BD02,3FJFE01F001E367D8DF0F7DADF6D149DE2,3FJFE01F003E0Q0180L02,3FKF01F007E0Q0180L02,3FKF83E00FE0Q0180L02,3FKF83E01FE0g02,3FKFC1E03FE0g02,3FKFE1C07FE0g02,3FLF801FFE330180K07C0M02,3FMF8FHFE330180K07C0M02,3FQFE337D80K060N02,3800780300FHFE3F7DBEF9F7C61DF7C0I02,38006002007FFE3F0DBEF916C7DD1440I02,380040H03C3FFE337DB6D9F6C7D9F7C0I02,38FF83FC7E3FFE337DB6D906C619040J02,38E007F8FF1FFE336DBEF906C619040J02,38E007F87F1FFE337DBEF9F6C619F7C0I02,38FFC3FC7E3FFE0L080R02,380040H03C3FFE0K0F80R02,38006002007FFE0K0F80R02,3800780300FHFE0g02,3FQFE0g02,:::3FgSFE,,::::::::::::::::::^XA^LH0,0^PO^FS^FO010,030^A0,30,25^FDSUPPLIER:SK hynix^FS^PRC^FO250,010^FR^XGHALOGEN_PKT,1,1^FS^FO450,030^A0,30,30^FD^FS^FO010,060^A0,30,30^FDDEVICE     :H9CKNNN8KTARKR-NTH^FS^FO010,085^A0,35,35^FDLOT NO. :T3LCZ88D     ( 5 / 5 )^FS^BY2,2.5:1,60 ^FS^FO035,115^B3,N,40,Y,N,^FDT3LCZ88D     005^FS^FO010,180^A0,22,22^FDITEM NO :120266-069(A3-3ALSHH0F-TAI-5055)^FS^BY2,2.3:1,60 ^FS^FO035,200^B3,N,40,Y,N,^FD120266-069  919^FS^FO010,300^A0,24,24^FDDATE CODE:1524^FS^FO010,265^A0,35,35^FDQ'TY: 919 EA^FS^FO010,325^A0,24,24^FDPACK DATE:2015/06/13^FS~DGON7PCSKH,1104,12,,O03JFC,N03LFC,N0NF,M07NFE,L01PF8,L07PFE,L0RF8,K03JF1MFC,K07JF1NF,J01KF1NF8,J03KFH0E3KFC,J07HF3HFH0638JFE,J0HFE3HF08731DJF,I01HFC3HF0C7H1C7IF8,I03FEC7HF8C70381IFC,I07F8C7HF8C703807HFE,I0HF841HF8C7070C78HF,H01HFCH07F8CF8F1C7CHF8,H01HFCH01JF0E1876HFC,H03HFE0C0IFC1F38E3HFC,H07FBE0E3IFC3HF0C3HFE,H0FE1F0OF187IF,H0FC3F87NFD8F3HF,01F8E187HFEH07IF0F1HF8001F980DIFJ07HF1F1HF8003F8H0IF8J01IFC3HFC003F808IFL0HFEH07FC007F838HFCL03HFH03FE007FCF9HF8L01HFE07FE007HFC1HFN0HFE3IF00IF83FEN07FE3IF00IF87FCN03FE7IF01LF8N01HF7IF81LF8O0LF81LFP0LF81KFEP07KF83KFEP07KFC3KFCP03KFC::3KFC01C03C07801KFC3KF801C0FE0FC01KFC3KF80360C318601KFC3KF80361803I01KFC3KF80H21803I01KFE7KF80631803I01KFE:3KF80HF98230401KFE3KF80HF8C318601KFC3KF80C18FE1FC01KFC3KF8180C7C07801KFC3KF8P01KFC3KFCP03KFC::3KFEP07KFC1KFEP07KF81LFP0LF8:1LF8N01LF80LFCN03LF00LFEN07LF00MFN0MF007LF8L01LFE007LFCL03LFE003LFEL07LFC003MF8J01MFC001MFEJ07MF8001NFCH03NF80H0gF,:H07XFE,H03XFC,:H01JFE01F01FC1KF8,I0JFE01EH0F81KF,I07IFE30E18780JFE,I03IFE38C3C780JFC,I01IFE38C7C708JF8,J0IFE38C7C7087IF,J07HFE38C2C7H07HFE,J03HFE38C206H07HFC,J01HFEH0EH0EH03HF8,K0HFE01FH063C3HF,K03FE03F8063E3FC,K01MF7JF8,L07PFE,L01PF8,M07NFE,M01NF8,N03LFC,O03JFC,Q07E,^FO490,170^FR^XGON7PCSKH,1,1^FS^FO010,350^A0,20,20^FDASSEMBLED IN KOREA FROM WAFER FABRICATED IN KOREA^FS^FO253,265^A0,16,16^FDAdditional information^FS^FO253,280^B7N,5,2,6,1,N^FDSK hynix            H9CKNNN8KTARKR-NTH            KR_KR     919    1524   T3LCZ88D            005  ^FS^XZ^PQ"
#define ZPL17 L"^XA^LH0,0^PO^FS^BY1,2:1,60 ^FS^FO010,040^BCN,60,N,N,N,^FDSP4E8G0XGP-L040^FS^FO010,110^A0,40,30^FDDVC : SP4E8G0XGP-L040^FS^FO010,160^BCN,60,N,N,N,^FDT3LCZ88D     005^FS^FO390,160^BCN,60,N,N,N,^FD 919^FS^FO010,230^A0,40,30^FDBOX ID : T3LCZ88D     005^FS^FO0400,230^A0,40,30^FDQ'TY : 919^FS^FO120,280^BCN,60,N,N,N,^FDT3LCZ88D     0050919^FS^FO160,350^A0,20,20^FDT3LCZ88D     0050919^FS^XZ^PQ"
#define ZPL18 L"^XA^LH0,0^PO^FS^BY1,2:1,60 ^FS^FO010,040^BCN,60,N,N,N,^FDSP4E8G0XGP-L040^FS^FO010,110^A0,40,30^FDDVC : SP4E8G0XGP-L040^FS^FO010,160^BCN,60,N,N,N,^FDT3LCZ88D     005^FS^FO390,160^BCN,60,N,N,N,^FD 919^FS^FO010,230^A0,40,30^FDBOX ID : T3LCZ88D     005^FS^FO0400,230^A0,40,30^FDQ'TY : 919^FS^FO120,280^BCN,60,N,N,N,^FDT3LCZ88D     0050919^FS^FO160,350^A0,20,20^FDT3LCZ88D     0050919^FS^XZ^PQ"
#define ZPL19 L"^XA^LH0,0^PO^FS^FO010,010^A0,30,25^FD--------------------^FS^FO010,060^A0,30,30^FD SUPPLIER:SK hynix^FS^FO010,90^A0,30,30^FD DEVICE     :H9CKNNN8KTARKR-NTH^FS^FO010,120^A0,35,35^FD LOT NO. :T3LCZ88D     ( 5 / 5 )^FS^FO010,240^A0,30,30^FD DATE CODE:1524^FS^FO310,240^A0,30,30^FD Q'TY: 919 EA^FS^BY2,2.5:1,60 ^FS^FO035,160^B3,N,40,Y,N,^FDT3LCZ88D     005^FS^XZ^PQ"

// CZLabelPreviewSaveDlg 대화 상자

class CZLabelPreviewSaveDlg : public CDialogEx
{
	// 생성입니다.
	public:
	CZLabelPreviewSaveDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

	// 대화 상자 데이터입니다.
	enum { IDD = IDD_ZLABELPREVIEWSAVE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.

	// 구현입니다.
	protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBnClickedBtExec();
	afx_msg void OnBnClickedBtNew();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedBtEventClear();
	afx_msg void OnBnClickedBtExit();
	afx_msg void OnBnClickedBtConnect();
	afx_msg void OnBnClickedBtDisconnect();
	afx_msg void OnCbnCloseupCbZpl();
	afx_msg void OnCbnCloseupCbZebraIp();

public:
	CExplorer m_IExplorer;
DECLARE_EVENTSINK_MAP()
	void	DownloadCompleteExplorer();
	void	NavigateComplete2Explorer(LPDISPATCH pDisp, VARIANT* URL);
	void	TitleChangeExplorer(LPCTSTR Text);
	void	ProgressChangeExplorer(long Progress, long ProgressMax);
	void	StatusTextChangeExplorer(LPCTSTR Text);
	
	void	  GoHome(void);
	void	  SetClipboardText(CString &szData);
	void	  GetClipboardText();

	void	  SaveImage();
	CString	  GetCurTime();

	CString	  m_strHomeUrl;
	CString   m_strEndUrl;

	CImage	  m_Image; //<atlimage.h>
	CRect	  m_Rect;

	CEdit     m_strFailCnt;
	CComboBox m_ctlCbZpl;

public:
	CString	m_strZPL,m_strPrevZPL;

	void	MBCS2Unicode(LPCSTR lpData,LPWSTR ReturnData);
	void	Unicode2MBCS(LPWSTR lpData,LPSTR lpRtd);
	void	ProcessStart();

	int		m_nStatus; //0:home, 1:ZPL preview, 2: SaveEnd
	CString	m_strTitle, m_strStatusText;
	long	m_nProgress, m_nProgressMax;

	void	TabKey(CWnd* pWnd);
	void	CtrlV(CWnd* pWnd);
	void	EnterKey(CWnd* pWnd);
	void	PrepareNewZPL();
//
	HRESULT ZPL2Img(); //2017-01-18 수정 return HRESULT

// http
	void ConnectZEBRA(); // http connect
	void AddLogEvent(CString str); //WEB Browser

	BOOL ReadConfigFile(); // \\ZPL2img.INI
	CString GetExecuteDirectory();
	
	CString m_strZEBRA_IP, m_strZEBRA_Port, m_strDMS_IP, m_strDMS_Port;
	CListBox m_ctlListEvent;

	

// TCP/IP
	CListBox m_ctlListSocket;
	CString  m_strFileName;
	BOOL	 m_bDMSconnected;

	void DisplayLogSocket(CString str);

	//DMS 통신
	CConnectSocket	m_Socket;

	void	Connect2DMS(CString stIP,UINT nPort);
	void	Disconnect2DMS();
	int		SendToDMS(CString strSendPacket);
	void	ResetByDMS(CString strZPL); 
	void	RecordExitTime();
	void	LogRcvDMS(CString str);
	void	LogSend2DMS(CString str);
	
	//2016-10-21 ZEBRA 상태체크용
	CConnectSocket2	m_Socket2;

	BOOL	Connect2ZEBRA(CString strZebraIP, UINT nPort);
	void	Disconnect2ZEBRA();
	int		SocketSend2(CString strSendPacket);
	int		SendToZEBRA(CString strZPL);
	
	void	ParseZEBRAResponse(TCHAR* tch); //2016-10-21 ~HS command response parsing
	void	LogRcvZEBRA(CString str);
	void	LogSend2ZEBRA(CString str);

	afx_msg void OnBnClickedBtZebraStatus();
	afx_msg void OnBnClickedBtZebraStatusStop();
	
	//2016-10-25     
	int		m_nZebraCheckTerm;
	//int		m_nImgInMemoryLimit; - 2017-01-20 주석처리
	void    RecordZebraRecovery(BOOL bRecoveryEnd); //TRUE: 복구완료(제브라재부팅,앱실행), FALSE: 복구진행중
	void	StartMonitoringZEBRA();
	void	StopMoniteringZEBRA();
	//2016-10-26 
	void	ShowDefaultPage();
	void	SetFocusOnWebCtrl();
	afx_msg void OnBnClickedBtEmergency();
	//2016-10-27
	BOOL	m_bPauseMonitoringZEBRA;
	CString GetMessageForHResult(HRESULT hr);

	afx_msg void OnBnClickedBtConfig();

	//2017-01-08
	BOOL	CheckZPL(CString str);

	void    TimeSync(CString str);

	afx_msg void OnBnClickedBtTimesync();

	//2017-01-16
	int		m_nSaveImageTerm; //NavigateComplete2Explorer - EndUrl (Preview Label 페이지 이동)후 이미지저장 Term
	int		m_nDMS_ConnectTerm;
	//2017-01-18
	int		m_nTimeOut;
	void    Retry();
	//2017-01-20
	CString     m_strNumOfImgInMemory;
	afx_msg void OnBnClickedBtRebootZebra();
};


