#include <iostream>

void swap (float& a, float& b);
void swap1 (char& a, char& b);

int main () {
    std::string str = "KLV NLX DZVHZVK-AZZ LK M DVLNLKU SFXCONZV KSLZHNLKN. UZ GMK DFVH\n"
                      "LH AFHPFH, MHP ULK CMVZHNK GZVZ ZMVAY SFXCONZV KSLZHNLKNK,\n"
                      "GFVQLHB FH FHZ FE NUZ ZMVALZKN SFXCONZVK. BVFGLHB OC, KLV NLX GMK\n"
                      "LHNZVZKNZP LH NVMLHK MHP UMP M XFPZA VMLAGMY LH ULK DZPVFFX. UZ\n"
                      "VZSMAAK: “L XMPZ KFXZ ZAZSNVFHLS BMPBZNK NF SFHNVFA NUZ NVMLHK.\n"
                      "NUZH L ZHPZP OC BZNNLHB XFVZ LHNZVZKNZP LH ZAZSNVFHLSK NUMH\n"
                      "NVMLHK. AMNZV FH, GUZH L GMK LH SFAAZBZ L XMPZ M SFXCONZV FON FE\n"
                      "MH FAP NZAZJLKLFH KZN.” MENZV BVMPOMNLHB EVFX FIEFVP OHLJZVKLNY,\n"
                      "DZVHZVK-AZZ DZSMXZ M KFENGMVZ ZHBLHZZV MN SZVH, NUZ AMVBZ\n"
                      "CMVNLSAZ CUYKLSK AMDFVMNFVY HZMV BZHZJM, KGLNWZVAMHP.\n"
                      "KSLZHNLKNK SFXZ EVFX MAA FJZV NUZ GFVAP NF OKZ LNK MSSZAZVMNFVK,\n"
                      "DON KLV NLX HFNLSZP NUMN NUZY GZVZ UMJLHB PLEELSOANY KUMVLHB\n"
                      "LHEFVXMNLFH. “LH NUFKZ PMYK, NUZVZ GMK PLEEZVZHN LHEFVXMNLFH FH\n"
                      "PLEEZVZHN SFXCONZVK, DON YFO UMP NF AFB FH NF PLEEZVZHN SFXCONZVK\n"
                      "NF BZN MN LN. MAKF, KFXZNLXZK YFO UMP NF AZMVH M PLEEZVZHN\n"
                      "CVFBVMX FH ZMSU SFXCONZV. FENZH LN GMK ROKN ZMKLZV NF BF MHP MKQ\n"
                      "CZFCAZ GUZH NUZY GZVZ UMJLHB SFEEZZ...”, NLX KMYK. NLX NUFOBUN UZ\n"
                      "KMG M GMY NF KFAJZ NULK CVFDAZX – FHZ NUMN UZ SFOAP KZZ SFOAP MAKF\n"
                      "UMJZ XOSU DVFMPZV MCCALSMNLFHK. MAVZMPY, XLAALFHK FE SFXCONZVK\n"
                      "GZVZ DZLHB SFHHZSNZP NFBZNUZV NUVFOBU NUZ EMKN-PZJZAFCLHB\n"
                      "LHNZVHZN MHP DZVHZVK-AZZ VZMALKZP NUZY SFOAP KUMVZ LHEFVXMNLFH\n"
                      "DY ZICAFLNLHB MH ZXZVBLHB NZSUHFAFBY SMAAZP UYCZVNZIN. LH XMVSU\n"
                      "1989, NLX AMLP FON ULK JLKLFH EFV GUMN GFOAP DZSFXZ NUZ GZD LH M\n"
                      "PFSOXZHN SMAAZP “LHEFVXMNLFH XMHMBZXZHN: M CVFCFKMA”. DZALZJZ\n"
                      "LN FV HFN, NLX’K LHLNLMA CVFCFKMA GMK HFN LXXZPLMNZAY MSSZCNZP.\n"
                      "LH EMSN, ULK DFKK MN NUZ NLXZ, XLQZ KZHPMAA, HFNZP NUZ GFVPK “JMBOZ\n"
                      "DON ZISLNLHB” FH NUZ SFJZV. NUZ GZD GMK HZJZV MH FEELSLMA SZVH\n"
                      "CVFRZSN, DON XLQZ XMHMBZP NF BLJZ NLX NLXZ NF GFVQ FH LN LH\n"
                      "KZCNZXDZV 1990. UZ DZBMH GFVQ OKLHB M HZIN SFXCONZV, FHZ FE KNZJZ\n"
                      "RFDK’ ZMVAY CVFPOSNK.";
    float mas[25];
    char masL[25];
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (static_cast<char>(str[i]) == ',' || static_cast<char>(str[i]) == '.' || static_cast<char>(str[i]) == ' ' ||
            static_cast<char>(str[i]) == '"' || static_cast<char>(str[i]) == ':') {
            count++;
        }
    }
    for (int a = 65; a <= 90; a++) {
        float point = 0.;
        for (int i = 0; i < str.size(); i++) {
            if (static_cast<char>(a) == str[i]) {
                point++;
            }
        }
        mas[a - 65] = (point / (str.size() - count))*100;
        masL[a - 65]=static_cast<char>(a);
    }
    bool i=true;
    while (i){
        i = false;
        for(int j = 0; j < 25; j++){
            if ( mas[j]>mas[j+1]){
                swap(mas[j], mas[j+1]);
                swap1(masL[j], masL[j+1]);
                i = true;
            }
        }
    }
    for ( int i = 25; i >= 0; i--){
        std::cout << std::endl << masL[i] << " : " << mas[i] << " %";
    }
    std::cout << std::endl;
    for(int i = 0; i < str.length(); i++){
        switch (str[i]) {
            case 'A':
                str.replace(i,1,"L");//
                break;
            case 'B':
                str.replace(i,1,"G");//
                break;
            case 'C':
                str.replace(i,1,"P");//
                break;
            case 'D':
                str.replace(i,1,"B");//
                break;
            case 'E':
                str.replace(i,1,"F");//
                break;
            case 'F':
                str.replace(i,1,"O");//
                break;
            case 'G':
                str.replace(i,1,"W");//
                break;
            case 'H':
                str.replace(i,1,"N");//
                break;
            case 'I':
                str.replace(i,1,"X");//
                break;
            case 'J':
                str.replace(i,1,"V");//
                break;
            case 'K':
                str.replace(i,1,"S");//
                break;
            case 'L':
                str.replace(i,1,"I");//
                break;
            case 'M':
                str.replace(i,1,"A");//
                break;
            case 'N':
                str.replace(i,1,"T");//
                break;
            case 'O':
                str.replace(i,1,"U");//
                break;
            case 'P':
                str.replace(i,1,"D");//
                break;
            case 'Q':
                str.replace(i,1,"K");//
                break;
            case 'R':
                str.replace(i,1,"J");//
                break;
            case 'S':
                str.replace(i,1,"C");//
                break;
            case 'T':
                str.replace(i,1,"13");//
                break;
            case 'U':
                str.replace(i,1,"H");//
                break;
            case 'V':
                str.replace(i,1,"R");//
                break;
            case 'W':
                str.replace(i,1,"Z");//
                break;
            case 'X':
                str.replace(i,1,"M");//
                break;
            case 'Y':
                str.replace(i,1,"Y");//
                break;
            case 'Z':
                str.replace(i,1,"E");//
                break;
        }
    }
    std::cout << str;
    for (int a = 65; a <= 90; a++) {
        float point = 0.;
        for (int i = 0; i < str.size(); i++) {
            if (static_cast<char>(a) == str[i]) {
                point++;
            }
        }
        mas[a - 65] = (point / (str.size() - count))*100;
        masL[a - 65]=static_cast<char>(a);
    }
    bool i1=true;
    while (i1){
        i1 = false;
        for(int j = 0; j < 25; j++){
            if ( mas[j]>mas[j+1]){
                swap(mas[j], mas[j+1]);
                swap1(masL[j], masL[j+1]);
                i1 = true;
            }
        }
    }
    for ( int i = 25; i >= 0; i--){
        std::cout << std::endl << abs(i-26) << " : " << masL[i] << " : " << mas[i] << " %";
    }
}

void swap (float& a, float& b){
    float t = a;
    a = b;
    b = t;
}

void swap1 (char& a, char& b){
    char t = a;
    a = b;
    b = t;
}
