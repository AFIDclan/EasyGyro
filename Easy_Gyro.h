#ifndef Easy_Gyro_h
#define Easy_Gyro_h



 
class Easy_Gyro {
public:
        Easy_Gyro(int offset[6]);
        ~Easy_Gyro();
        void Initialize();
        void CalcDMP();
        int GetPitch();
        int GetRoll();
        int GetYaw();
};
 
#endif