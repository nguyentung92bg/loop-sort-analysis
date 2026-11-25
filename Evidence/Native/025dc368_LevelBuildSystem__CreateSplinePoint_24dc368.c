/* IL2CPP: LevelBuildSystem$$CreateSplinePoint
void LevelBuildSystem__CreateSplinePoint (LevelBuildSystem_o* __this, int32_t idx, int32_t x, int32_t y, float height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelBuildSystem$$CreateSplinePoint
   void LevelBuildSystem__CreateSplinePoint (LevelBuildSystem_o* __this, int32_t idx, int32_t x,
   int32_t y, float height, const MethodInfo* method); */

void LevelBuildSystem__CreateSplinePoint_24dc368
               (float param_1,float param_2,long param_3,undefined4 param_4,int param_5,int param_6)

{
  long lVar1;
  float fVar2;
  undefined1 auStack_cc [76];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  if (*(long *)(param_3 + 0x38) != 0) {
    lVar1 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_3 + 0x38),0);
    if (lVar1 != 0) {
      UnityEngine_Transform__get_position_3c2d540(lVar1,0);
      if (*(long *)(param_3 + 0x90) != 0) {
        fVar2 = *(float *)(*(long *)(param_3 + 0x90) + 0x28);
        Dreamteck_Splines_SplinePoint___ctor_2368f48
                  (fVar2 * (float)param_5,param_2 + param_1,fVar2 * (float)param_6,&uStack_80,0);
        lVar1 = *(long *)(param_3 + 0x38);
        if (lVar1 != 0) {
          func_0x04608620(auStack_cc,&uStack_80,0x4c);
          Dreamteck_Splines_SplineComputer__SetPoint_2348aec(lVar1,param_4,auStack_cc,0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

